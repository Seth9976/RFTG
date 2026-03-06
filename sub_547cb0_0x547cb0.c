// 函数名称: sub_547cb0
// 虚拟地址: 0x547cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_547cb0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 - 1 u<= 0xe)
    if (arg1 - 1 u<= 0xe)
        switch (arg1)
            case 1
                return 0
            case 2
                return 1
            case 3
                return 0x300
            case 4
                return 0x301
            case 5
                return 0x302
            case 6
                return 0x303
            case 7
                return 0x304
            case 8
                return 0x305
            case 9
                return 0x306
            case 0xa
                return 0x307
            case 0xb
                return 0x308
            case 0xe
                return 0x8001
            case 0xf
                return 0x8002
    
    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xd34, "GLBlendModeFromDx")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
