// 函数名称: sub_4cb400
// 虚拟地址: 0x4cb400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4cb400(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ecx = arg1
    int32_t* ecx = arg1
    int32_t edx = *ecx
    int32_t ebx
    int32_t var_10 = ebx
    uint32_t eax_1 = ecx[1] + edx
    char* edi_1 = ecx[2] + edx
    uint32_t var_8 = eax_1
    
    if (edi_1 u< eax_1)
        do
            ebx.b = *edi_1
            
            if (ebx.b u>= 0x80)
                eax_1.b = ebx.b
                eax_1.b &= 0xe0
                
                if (eax_1.b != 0xc0)
                    ecx.b = ebx.b
                    ecx.b &= 0xf0
                    
                    if (ecx.b != 0xe0)
                        edx.b = ebx.b
                        edx.b &= 0xf8
                        
                        if (edx.b != 0xf0)
                            sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                                "c:\ax2010\engine\Xutf8.cpp", 0x209, "Xutf8_peek_next")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
            
            char* var_c = edi_1
            uint32_t eax_2
            
            if (sub_4ba310(&var_c) != 0x20)
                if (edi_1 u< var_8)
                    while (true)
                        ebx.b = *edi_1
                        
                        if (ebx.b u>= 0x80 && (ebx.b & 0xe0) != 0xc0)
                            eax_2.b = ebx.b
                            eax_2.b &= 0xf0
                            
                            if (eax_2.b != 0xe0 && (ebx.b & 0xf8) != 0xf0)
                                sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                                    "c:\ax2010\engine\Xutf8.cpp", 0x209, "Xutf8_peek_next")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                        
                        var_c = edi_1
                        uint32_t eax_7 = sub_4ba310(&var_c)
                        
                        if (eax_7 == 0xd)
                            break
                        
                        if (eax_7 == 0x20)
                            break
                        
                        if (eax_7 == 0x7b)
                            break
                        
                        var_c = edi_1
                        
                        if (ebx.b u>= 0x80 && (ebx.b & 0xe0) != 0xc0)
                            eax_7.b = ebx.b
                            eax_7.b &= 0xf0
                            
                            if (eax_7.b != 0xe0)
                                ebx.b &= 0xf8
                                
                                if (ebx.b != 0xf0)
                                    sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                                        "c:\ax2010\engine\Xutf8.cpp", 0x20f, "Xutf8_next")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                        
                        sub_4ba310(&var_c)
                        edi_1 = var_c
                        
                        if (edi_1 u>= var_8)
                            return edi_1 - *arg1
                
                break
            
            var_c = edi_1
            
            if (ebx.b u>= 0x80)
                eax_2.b = ebx.b
                eax_2.b &= 0xe0
                
                if (eax_2.b != 0xc0 && (ebx.b & 0xf0) != 0xe0)
                    ebx.b &= 0xf8
                    
                    if (ebx.b != 0xf0)
                        sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                            "c:\ax2010\engine\Xutf8.cpp", 0x20f, "Xutf8_next")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
            
            eax_1, ecx, edx = sub_4ba310(&var_c)
            edi_1 = var_c
        while (edi_1 u< var_8)
        
        ecx = arg1
    
    return edi_1 - *ecx
}
