MRUBY_PATH := [mrubyのパスを指定してください]

APPL_LIBS += $(MRUBY_PATH)/build/EV3RT/lib/libmruby.a -lm
INCLUDES += -I$(MRUBY_PATH)/include
