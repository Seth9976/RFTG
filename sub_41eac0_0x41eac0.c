// 函数名称: sub_41eac0
// 虚拟地址: 0x41eac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_41eac0(int32_t arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: if (arg1 == 0xffffffff)
    if (arg1 == 0xffffffff)
        *arg3 = 0
        return 0
    
    int32_t eax_1 = arg1 & 0x7f
    *arg3 = (arg1 u>> 7).b & 1
    
    if (eax_1 u> 9)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xd47, "ActionGetIcon")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_4c5a30() __tailcall
        
        breakpoint
    
    switch (eax_1)
        case 0
            return data_307c340
        case 1
            return data_307c330
        case 2
            return data_307c348
        case 3, 4
            return data_307c334
        case 5, 6
            return data_307c344
        case 7
            return data_307c34c
        case 8
            return data_307c32c
        case 9
            return data_307c33c
}
