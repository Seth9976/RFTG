// 函数名称: sub_634420
// 虚拟地址: 0x634420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_634420(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t edx = ebx[9]
    int32_t esi = ebx[0xc]
    int32_t i = ebx[7]
    int32_t edi = ebx[6]
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(edi + 7)
    arg1 = *ebx
    void* ecx_1 = ebx[5]
    int32_t result = (eax_2 + (edx_1 & 7)) s>> 3
    int32_t ebx_3 = ebx[4] - result + edi
    int32_t var_10 = ebx_3
    
    while (i != 0)
        i -= 1
        result = 0
        int32_t edx_2
        edx_2.b = 0
        int32_t result_1 = 0
        
        if (edi s> 0)
            do
                if ((result.b & 7) == 0)
                    edx_2.b = *arg1
                    arg1 += 1
                
                uint32_t eax_9 = (zx.d(edx_2.b) u>> 7) * 4
                *ecx_1 = *(eax_9 + esi)
                *(ecx_1 + 1) = *(eax_9 + esi + 1)
                eax_9.b = *(esi + eax_9 + 2)
                *(ecx_1 + 2) = eax_9.b
                result = result_1 + 1
                edx_2.b *= 2
                ecx_1 += 3
                result_1 = result
            while (result s< edi)
            
            ebx_3 = var_10
        
        arg1 += ebx_3
        ecx_1 += edx
    
    return result
}
