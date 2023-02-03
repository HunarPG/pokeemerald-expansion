
MAKEFLAGS += --no-print-directory

TOOLDIRS := $(filter-out tools/mgba tools/agbcc tools/binutils,$(wildcard tools/*))

.PHONY: all $(TOOLDIRS)

TOOLDIRS := $(filter-out tools/agbcc tools/binutils tools/poryscript,$(wildcard tools/*))

all: $(TOOLDIRS)

$(TOOLDIRS):
	@$(MAKE) -C $@
