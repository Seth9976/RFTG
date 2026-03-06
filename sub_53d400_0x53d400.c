// 函数名称: sub_53d400
// 虚拟地址: 0x53d400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_53d400(int128_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = data_3079208
    int32_t* result = data_3079208
    
    if (result != 0 && result[1] == 0x19)
        result = sub_466320(result)
        
        if (result != 0)
            int128_t* ebx_1 = arg1
            int32_t eax_1 = sub_537810(ebx_1)
            int32_t eax_4 = sub_537810(arg2) + 1 - eax_1
            WPARAM esi_2 = arg2 + 1
            WPARAM var_10_1 = esi_2
            int32_t eax_6
            char* ecx_2
            eax_6, ecx_2 = sub_537960(ebx_1)
            int32_t edi_2 = eax_6 + 1
            int32_t var_1c_1 = edi_2
            int32_t var_c_1 = 0
            
            if (edi_2 s> 0)
                WPARAM eax_7 = esi_2
                void* ecx_4 = ebx_1 - esi_2
                WPARAM var_8_1 = eax_7
                void* var_20_1 = ecx_4
                
                while (true)
                    WPARAM esi_3
                    
                    if (ebx_1 s<= arg2)
                        esi_3 = esi_2 - 1
                    else
                        ebx_1 = ecx_4 + eax_7
                        esi_3 = eax_7
                    
                    int32_t* eax_8 = data_3079208
                    
                    if (eax_8 != 0 && eax_8[1] == 0x19)
                        int32_t* eax_9 = sub_466320(eax_8)
                        
                        if (eax_9 != 0)
                            if (ebx_1 s< 0 || ebx_1 s>= eax_9[1])
                                sub_4c5870(
                                    "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount", 
                                    &data_83f3d3, "Windows\EditorWindow.cpp", 0x32a, "EmitterGetIndent")
                                
                                if (IsDebuggerPresent() != 1)
                                    sub_4c5a30()
                                    noreturn
                                
                                breakpoint
                            
                            int32_t edx_2 = ebx_1 * 0x134
                            int32_t var_30_3 = *(edx_2 + *eax_9 + 8) + eax_4
                            ecx_2 = sub_5378b0(ebx_1, edx_2)
                            
                            if (ebx_1 != esi_3)
                                char* var_34_1 = ecx_2
                                int32_t* eax_13 = sub_4fff30(data_30d7434, 0)
                                sub_505390(eax_13, ebx_1, result, eax_13, esi_3)
                                ecx_2 = sub_53c0a0(ebx_1, esi_3)
                                edi_2 = var_1c_1
                            
                            var_8_1 += 1
                            ebx_1 = arg1
                            esi_2 = var_10_1
                            int32_t eax_16 = var_c_1 + 1
                            var_c_1 = eax_16
                            
                            if (eax_16 s>= edi_2)
                                break
                            
                            ecx_4 = var_20_1
                            eax_7 = var_8_1
                            continue
                    
                    sub_4c5870("pParticleDef", &data_83f3d3, "Windows\EditorWindow.cpp", 0x328, 
                        "EmitterGetIndent")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            int32_t var_30_5
            bool cond:0_1
            
            if (ebx_1 s<= arg2)
                ecx_2 = data_3079208
                esi_2 -= edi_2
                
                if (ecx_2 != 0)
                    ecx_2 = *(ecx_2 + 4)
                    
                    if (ecx_2 != 0x19)
                        cond:0_1 = ecx_2 != 0x1b
                    label_53d5cf:
                        
                        if (not(cond:0_1))
                            ecx_2 = sub_539d30(esi_2)
                    else
                        var_30_5 = 0xffffffff
                        ecx_2 = sub_538a80(esi_2)
            else
                void* eax_19 = data_3079208
                
                if (eax_19 != 0)
                    int32_t eax_20 = *(eax_19 + 4)
                    
                    if (eax_20 != 0x19)
                        cond:0_1 = eax_20 != 0x1b
                        goto label_53d5cf
                    
                    var_30_5 = 0xffffffff
                    ecx_2 = sub_538a80(esi_2)
            sub_536c00(ecx_2)
            sub_56e600()
            return sub_56e480()
    
    return result
}
