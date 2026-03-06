// 函数名称: sub_446cc0
// 虚拟地址: 0x446cc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_446cc0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    
    switch (arg1)
        case 0, 8
            return 0
        case 1, 6
            var_c = 1
            
            if (sub_426c00(&var_c) != 0)
                return 1
            
            return 0
        case 2, 3
            void* eax_5 = *(data_27e7a40 + 0x548)
            void* eax_8 = sub_418870(*(sub_463f60(eax_5 + 0x43960, *(eax_5 + 0xbfd0)) + 0x7c))
            int32_t var_8 = *(eax_8 + 0xac)
            var_c = 2
            
            if (sub_426c00(&var_c) == 0)
                return 0
            
            *(eax_8 + 0xac)
            return 2
        case 4
            var_c = 4
            
            if (sub_426c00(&var_c) != 0)
                return 4
            
            return 0
        case 5
            var_c = 3
            
            if (sub_426c00(&var_c) != 0)
                return 3
            
            return 0
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x46b0, "DropHitTest")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
