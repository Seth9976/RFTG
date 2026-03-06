// 函数名称: sub_4e0370
// 虚拟地址: 0x4e0370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4e0370(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_10 = ebx
    int32_t* result = sub_4e7410(arg1)
    int32_t* ecx = *result
    int32_t edi = 0
    int32_t* result_1 = result
    
    if (*ecx s> 0)
        result = nullptr
        int32_t* ecx_1 = ecx
        
        while (true)
            int32_t esi_1 = ecx_1[1]
            char* edx_1 = *arg2
            char* ecx_3 = *(esi_1 + result + 4)
            int32_t ecx_5
            
            while (true)
                ebx.b = *ecx_3
                char temp0_1 = *edx_1
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        ecx_5 = 0
                        break
                    
                    ebx.b = ecx_3[1]
                    char temp3_1 = edx_1[1]
                    c_1 = ebx.b u< temp3_1
                    
                    if (ebx.b == temp3_1)
                        ecx_3 = &ecx_3[2]
                        edx_1 = &edx_1[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        ecx_5 = 0
                        break
                
                bool c_2 = unimplemented  {sbb ecx, ecx}
                ecx_5 = sbb.d(sbb.d(ecx_3, ecx_3, c_1), 0xffffffff, c_2)
                break
            
            if (ecx_5 == 0)
                *(esi_1 + result + 0x38) = 0xa
            
            ecx_1 = *result_1
            edi += 1
            result = &result[0x50]
            
            if (edi s>= *ecx_1)
                break
    
    result.b = 1
    return result
}
