// 函数名称: sub_40c7a0
// 虚拟地址: 0x40c7a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_40c7a0(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x374)
    int32_t eax = *(arg1 + 0x374)
    
    if (eax u> 6)
        sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x156, "GameSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (eax)
        case 0
            return data_27e7a54 + 0x54
        case 1
            return data_27e7a54 + 0xe4
        case 2, 4, 5
            return data_27e7a54 + 0x174
        case 3
        label_40c7da:
            sub_4075c0()
            int32_t eax_5 = sub_40c6f0(arg1 + 0x378)
            sub_407670()
            return eax_5 + 0x144
        case 6
            int32_t eax_2 = *(arg1 + 0x37c) - 1
            
            if (eax_2 u<= 3)
                switch (eax_2)
                    case 0
                        return 0x27c06dc
                    case 3
                        return 0x27d40e8
                
                goto label_40c7da
            
            sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x147, "GameSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
}
