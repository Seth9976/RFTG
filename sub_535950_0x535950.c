// 函数名称: sub_535950
// 虚拟地址: 0x535950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_535950(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_8 = ebx
    int32_t edi = *(arg1 + 8)
    int32_t esi = 0
    
    if (edi s> 0)
        int32_t* result = *(arg1 + 0xc)
        
        while (true)
            char* edx_1 = arg2
            char* ecx_1 = *result
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
            
            esi += 1
            result = &result[0x34]
            
            if (esi s>= edi)
                break
    
    return nullptr
}
