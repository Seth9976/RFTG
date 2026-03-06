// 函数名称: sub_4d5560
// 虚拟地址: 0x4d5560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4d5560(int32_t arg1, int32_t arg2, void* arg3, char* arg4)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_8 = ebx
    int32_t edi = *(arg3 + 8)
    int32_t result = 0
    
    if (edi s> 0)
        int32_t* esi_2 = *(arg3 + 0xc) + 0x74
        
        while (true)
            char* edx = arg4
            char* ecx = *esi_2
            int32_t ecx_2
            
            while (true)
                ebx.b = *ecx
                char temp0_1 = *edx
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        ecx_2 = 0
                        break
                    
                    ebx.b = ecx[1]
                    char temp3_1 = edx[1]
                    c_1 = ebx.b u< temp3_1
                    
                    if (ebx.b == temp3_1)
                        ecx = &ecx[2]
                        edx = &edx[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        ecx_2 = 0
                        break
                
                bool c_2 = unimplemented  {sbb ecx, ecx}
                ecx_2 = sbb.d(sbb.d(ecx, ecx, c_1), 0xffffffff, c_2)
                break
            
            if (ecx_2 == 0)
                return result
            
            result += 1
            esi_2 = &esi_2[0x34]
            
            if (result s>= edi)
                break
    
    char* var_14_1 = arg4
    sub_4c5680("Can't find bone %s")
    return 0xffffffff
}
