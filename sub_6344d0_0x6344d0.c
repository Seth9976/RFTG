// 函数名称: sub_6344d0
// 虚拟地址: 0x6344d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6344d0(void* arg1)
{
    // 第一条实际指令: int32_t* ecx = arg1
    int32_t* ecx = arg1
    arg1 = *ecx
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(ecx[9])
    int32_t edx_2 = ecx[0xc]
    int32_t i = ecx[7]
    int32_t* esi = ecx[5]
    int32_t edi = ecx[6]
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(edi + 7)
    int32_t result = (eax_6 + (edx_3 & 7)) s>> 3
    int32_t edx_7 = ecx[4] - result + edi
    int32_t var_10 = edx_7
    
    while (i != 0)
        i -= 1
        result.b = 0
        int32_t ecx_2 = 0
        
        if (edi s> 0)
            do
                if ((ecx_2.b & 7) == 0)
                    char* edx_8 = arg1
                    result.b = *edx_8
                    arg1 = &edx_8[1]
                
                *esi = *(edx_2 + (zx.d(result.b) u>> 7 << 2))
                ecx_2 += 1
                result.b *= 2
                esi = &esi[1]
            while (ecx_2 s< edi)
            
            edx_7 = var_10
        
        arg1 += edx_7
        esi = &esi[(eax_2 + (edx & 3)) s>> 2]
    
    return result
}
