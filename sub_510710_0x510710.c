// 函数名称: sub_510710
// 虚拟地址: 0x510710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_510710(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_8 = ebx
    int32_t* eax = sub_50c140(arg1)
    int32_t edi = eax[1]
    int32_t result = 0
    
    if (edi s> 0)
        int32_t* eax_2 = *eax + 4
        
        while (true)
            char* edx_1 = *eax_2
            char* ecx_1 = arg2
            int32_t ecx_3
            
            while (true)
                ebx.b = *ecx_1
                char temp0_1 = *edx_1
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        ecx_3 = 0
                        break
                    
                    ebx.b = ecx_1[1]
                    char temp3_1 = edx_1[1]
                    c_1 = ebx.b u< temp3_1
                    
                    if (ebx.b == temp3_1)
                        ecx_1 = &ecx_1[2]
                        edx_1 = &edx_1[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        ecx_3 = 0
                        break
                
                bool c_2 = unimplemented  {sbb ecx, ecx}
                ecx_3 = sbb.d(sbb.d(ecx_1, ecx_1, c_1), 0xffffffff, c_2)
                break
            
            if (ecx_3 == 0)
                return result
            
            result += 1
            eax_2 = &eax_2[0x2e]
            
            if (result s>= edi)
                break
    
    sub_4c5870("Halt", &data_83f3d3, "FabDef.cpp", 0x753, "FabElement")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
