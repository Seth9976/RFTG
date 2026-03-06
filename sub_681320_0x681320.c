// 函数名称: sub_681320
// 虚拟地址: 0x681320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_681320(int32_t* arg1, int32_t* arg2, void* arg3, void** arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t temp0 = arg5
    int32_t temp0 = arg5
    arg5 -= 1
    void* result = arg1
    int32_t edi = *(result + 0x70)
    
    if (temp0 - 1 s>= 0)
        void** ebx_1 = arg4
        int32_t* ecx_3 = arg3 * 4
        int32_t temp1_1
        
        do
            int32_t esi_1 = *(ecx_3 + *arg2)
            result = *ebx_1
            ecx_3 = &ecx_3[1]
            ebx_1 = &ebx_1[1]
            char* edx_2 = nullptr
            arg1 = ecx_3
            
            if (edi != 0)
                result += 1
                
                do
                    ecx_3.b = edx_2[esi_1]
                    *(result + 1) = ecx_3.b
                    *result = ecx_3.b
                    *(result - 1) = ecx_3.b
                    edx_2 = &edx_2[1]
                    result += 3
                while (edx_2 u< edi)
                
                ecx_3 = arg1
            
            temp1_1 = arg5
            arg5 -= 1
        while (temp1_1 - 1 s>= 0)
    
    return result
}
