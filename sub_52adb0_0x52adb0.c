// 函数名称: sub_52adb0
// 虚拟地址: 0x52adb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_52adb0(char const (*** arg1)[0x8], int32_t arg2, void* arg3)
{
    // 第一条实际指令: switch (*(arg3 + 0x14c0) - 1)
    switch (*(arg3 + 0x14c0) - 1)
        case 0
            *arg1 = &data_8c08d8
            return 6
        case 1
            *arg1 = &data_8c0a08
            return 7
        case 2
            *arg1 = &data_8c0828
            return 0xb
        case 4
            *arg1 = &data_8c0938
            return 0xd
        case 5
            *arg1 = &data_8c0a78
            return 4
    
    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x11a7, "GetPropDefs")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
