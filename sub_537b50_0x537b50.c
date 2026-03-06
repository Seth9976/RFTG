// 函数名称: sub_537b50
// 虚拟地址: 0x537b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_537b50(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax = sub_537810(arg1)
    int32_t* eax_1 = data_3079208
    
    if (eax_1 != 0 && eax_1[1] == 0x19)
        void* eax_2 = sub_466320(eax_1)
        
        if (eax_2 != 0)
            int32_t result = arg1 + 1
            
            if (result s< *(eax_2 + 4))
                int32_t edi_2 = result * 0x134
                
                while (true)
                    int32_t* eax_4 = data_3079208
                    
                    if (eax_4 != 0 && eax_4[1] == 0x19)
                        int32_t* eax_5 = sub_466320(eax_4)
                        
                        if (eax_5 != 0)
                            if (result s< 0 || result s>= eax_5[1])
                                sub_4c5870(
                                    "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount", 
                                    &data_83f3d3, "Windows\EditorWindow.cpp", 0x32a, "EmitterGetIndent")
                                
                                if (IsDebuggerPresent() != 1)
                                    sub_4c5a30()
                                    noreturn
                                
                                breakpoint
                            
                            int32_t eax_7 = *(edi_2 + *eax_5 + 8)
                            
                            if (eax_7 s< eax)
                                break
                            
                            if (eax_7 == eax)
                                return result
                            
                            result += 1
                            edi_2 += 0x134
                            
                            if (result s>= *(eax_2 + 4))
                                break
                            
                            continue
                    
                    sub_4c5870("pParticleDef", &data_83f3d3, "Windows\EditorWindow.cpp", 0x328, 
                        "EmitterGetIndent")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            return 0xffffffff
    
    sub_4c5870("pParticleDef", &data_83f3d3, "Windows\EditorWindow.cpp", 0x36b, "EmitterNextSibling")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
