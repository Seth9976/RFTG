// 函数名称: sub_4f5220
// 虚拟地址: 0x4f5220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4f5220(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_c = ebx
    int32_t* eax
    int32_t ecx
    eax, ecx = sub_4f4890(arg1)
    int32_t edi = eax[1]
    int32_t result = 0
    
    if (edi s> 0)
        int32_t* eax_2 = *eax + 8
        
        while (true)
            char* edx_1 = arg2
            char* ecx_2 = *eax_2
            int32_t ecx_4
            
            while (true)
                ebx.b = *ecx_2
                char temp0_1 = *edx_1
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        ecx_4 = 0
                        break
                    
                    ebx.b = ecx_2[1]
                    char temp3_1 = edx_1[1]
                    c_1 = ebx.b u< temp3_1
                    
                    if (ebx.b == temp3_1)
                        ecx_2 = &ecx_2[2]
                        edx_1 = &edx_1[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        ecx_4 = 0
                        break
                
                bool c_2 = unimplemented  {sbb ecx, ecx}
                ecx_4 = sbb.d(sbb.d(ecx_2, ecx_2, c_1), 0xffffffff, c_2)
                break
            
            if (ecx_4 == 0)
                return result
            
            result += 1
            eax_2 = &eax_2[0x46]
            
            if (result s>= edi)
                break
    
    char* const eax_4 = arg1[8]
    
    if (eax_4 == 0)
        eax_4 = &data_83f3d3
    
    char* const var_18 = eax_4
    char* var_1c = arg2
    sub_4c57f0("couldn't find element %s in %s")
    sub_4c5870("Halt", &data_83f3d3, "UIDef.cpp", 0x1d2, "UILayoutGetElementIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
