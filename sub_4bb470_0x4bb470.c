// 函数名称: sub_4bb470
// 虚拟地址: 0x4bb470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4bb470(char* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 u> 8)
    if (arg2 u> 8)
        sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x29b, 
            "UsernameSetupDialogClick")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t ecx
    
    switch (arg2)
        case 0, 8
            if (sub_4ba450(&arg1[0x290]) != 0)
                char* const edi_1 = *(arg1 + 0x290)
                
                if (edi_1 == 0)
                    edi_1 = &data_83f3d3
                
                _strncpy(data_27e7a54, edi_1, 0x10)
                *(data_27e7a54 + 0xf) = 0
            
            sub_408a40()
            sub_4075c0()
            data_27e7a54
            sub_403e80()
            sub_407670()
            int32_t eax_14
            eax_14.b = arg2 == 8
            *arg1 = 0
            return eax_14 + 1
        case 1
            *arg1 = 0
            arg1[0x10] = 1
            arg1[8] = 0
            return 0
        case 2
            *arg1 = 0
            arg1[8] = 1
            arg1[0x10] = 0
            return 0
        case 3
            *arg1 = 0
            arg1[8] = 0
            arg1[0x10] = 0
            ecx.b = 1
            sub_4ba4f0(ecx, data_27e7aa4)
            return 0
        case 4
            *arg1 = 0
            arg1[8] = 0
            arg1[0x10] = 0
            data_307d084 = 0
            data_307cd0c = 1
            data_307d080 = 4
            data_307d088 = 0
            data_307d06d = 1
            data_307d051 = 0
            char* i = &data_307cdce
            
            do
                *i = 0
                i = &i[0x1c]
            while (i s< &data_307d088:2)
            
            sub_40c7a0(&data_307cd0c)
            data_307cd38 = 1
            data_307cd3c = 1
            data_307cd0c = 0
            data_307cd4c = 0
            return 0
        case 5
            data_307d088 = 0
            data_307cd0c = 1
            data_307d080 = 5
            data_307d084 = 0
            data_307d06d = 1
            data_307d051 = 0
            char* i_1 = &data_307cdce
            
            do
                *i_1 = 0
                i_1 = &i_1[0x1c]
            while (i_1 s< &data_307d088:2)
            
            sub_40c7a0(&data_307cd0c)
            data_307cd14 = 1
            data_307cd18 = 0
            data_307cd0c = 0
            return 0
        case 6
            ShellExecuteA(nullptr, "open", "http://templegatesgames.com/privacy.html", nullptr, 
                nullptr, SW_SHOWNORMAL)
            return 0
        case 7
            void* eax_7 = data_27e7a54
            ecx.b = *(eax_7 + 0x50) == 0
            *(eax_7 + 0x50) = ecx.b
            sub_408a40()
            
            if (*(data_27e7a54 + 0x50) == 0)
                sub_4075c0()
                sub_4022e0()
                sub_407670()
                return 0
            
            sub_4075c0()
            sub_4c8da0(*(data_27e7a40 + 0x28))
            void* eax_9 = data_27e7a40
            *(eax_9 + 0x20) = 0
            *(eax_9 + 0x24) = 0
            sub_407670()
            return 0
}
