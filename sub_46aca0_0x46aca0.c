// 函数名称: sub_46aca0
// 虚拟地址: 0x46aca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_46aca0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t* var_8 = nullptr
    
    if (arg4 s<= 0)
        return 
    
    int32_t* esi_2 = arg3 - ebx
    int32_t* var_c_1 = esi_2
    
    do
        int32_t edi_1 = *(esi_2 + ebx)
        
        if (edi_1 != 0xffffffff)
            void* eax = sub_418620(edi_1)
            
            if (eax == 0)
                if (edi_1 s< 0)
                    sub_4c5870("cidx >= 0", &data_83f3d3, "..\code\RFTGClient.cpp", 0x9c, 
                        "RFTGGfxLookup")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (edi_1 s> 0xf4240)
                    sub_4c5870("cidx <= 1000000", &data_83f3d3, "..\code\RFTGClient.cpp", 0x9d, 
                        "RFTGGfxLookup")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax = sub_463e80(*(data_27e7a40 + 0x548) + 0x43960)
                esi_2 = var_c_1
                *eax = 0
                *(eax + 0x7c) = edi_1
            
            *ebx = *(eax + 0xac)
        else
            *ebx = 0
        
        arg1 = var_8 + 1
        ebx = &ebx[1]
        var_8 = arg1
    while (arg1 s< arg4)
}
