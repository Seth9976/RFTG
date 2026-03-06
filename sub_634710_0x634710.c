// 函数名称: sub_634710
// 虚拟地址: 0x634710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_634710(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ecx = arg1
    int32_t* ecx = arg1
    int32_t edx = ecx[9]
    int32_t i_1 = ecx[7]
    arg1 = *ecx
    int32_t eax_1 = ecx[0xe]
    int32_t esi = ecx[5]
    int32_t edx_1 = ecx[0xc]
    int32_t edi = ecx[6]
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q(edi + 7)
    void* result = ecx[4] - (((edx_2 & 7) + eax_3) s>> 3) + edi
    int32_t i = i_1
    void* result_1 = result
    
    if (i_1 != 0)
        do
            i -= 1
            int32_t ecx_1 = 0
            i_1.b = 0
            int32_t var_c_1 = 0
            
            if (edi s> 0)
                do
                    if ((ecx_1.b & 7) == 0)
                        i_1.b = *arg1
                        arg1 += 1
                    
                    result.b = i_1.b
                    result.b u>>= 7
                    result = zx.d(result.b)
                    
                    if (result != eax_1)
                        int32_t var_2c_1 = 3
                        int32_t var_30_1 = edx_1 + (result << 2)
                        int32_t var_34_1 = esi
                        sub_5cd110()
                        ecx_1 = var_c_1
                    
                    ecx_1 += 1
                    i_1.b *= 2
                    esi += 3
                    var_c_1 = ecx_1
                while (ecx_1 s< edi)
                
                result = result_1
            
            arg1 += result
            esi += edx
        while (i != 0)
    
    return result
}
