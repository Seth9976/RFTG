// 函数名称: sub_4049e0
// 虚拟地址: 0x4049e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4049e0(void* arg1)
{
    // 第一条实际指令: uint32_t eax_1 = *(arg1 + 4) - 0xf4245
    uint32_t eax_1 = *(arg1 + 4) - 0xf4245
    
    if (eax_1 u> 0x10)
        sub_4c5870("Halt", &data_83f3d3, "..\code\CClient.cpp", 0x7ad, "CClientHandleMessage")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (eax_1)
        case 0
            eax_1 = sub_401ff0(arg1)
            
            if (eax_1.b == 0)
                return eax_1
            
            if (*(data_27e7a40 + 0x19) == 0)
                data_27e7a54
                return sub_403e80()
            
            sub_401100()
            return sub_403e80()
        case 1
            return sub_404520(arg1)
        case 2
            return sub_401ff0(arg1)
        case 3
            return sub_403f50(arg1)
        case 4
            return sub_4042e0(arg1)
        case 5
            eax_1 = data_27e7a40
            
            if (*(eax_1 + 0x19) != 0)
                return sub_401210()
            
            return eax_1
        case 6
            return sub_4040a0(arg1)
        case 7
            return sub_404700(arg1)
        case 8
            return sub_404950(arg1)
        case 9
            return sub_4047b0(arg1, arg1)
        case 0xa
            return sub_403ff0(arg1)
        case 0xb
            if (*(data_27e7fd0 + 0x27) != 0)
                data_30d6f3c = data_307c1bc
                return eax_1
            
            if (data_307cd38 == 0)
                return eax_1
            
            data_307cdb8 = 1
            return eax_1
        case 0xc
            char* eax_25 = _strncpy(&data_307cd24, arg1 + 0xc, 0x10)
            data_307cd33 = 0
            return eax_25
        case 0xd
            return sub_403fc0(arg1)
        case 0xe
            return sub_4044a0(arg1)
        case 0xf
            return sub_42f5d0(arg1)
        case 0x10
            void* eax_24 = sub_46b2b0(*(data_27e7a40 + 0x74))
            *(eax_24 + 0x10) = *(arg1 + 0xc)
            return eax_24
}
