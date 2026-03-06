// 函数名称: sub_634290
// 虚拟地址: 0x634290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_634290(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t edx = esi[9]
    void* i = esi[7]
    char* ecx = esi[5]
    arg1 = *esi
    int32_t eax_1 = esi[0xc]
    int32_t edi = esi[6]
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(edi + 7)
    int32_t result = (eax_3 + (edx_1 & 7)) s>> 3
    int32_t esi_3 = esi[4] - result + edi
    int32_t var_14 = esi_3
    
    if (eax_1 == 0)
        while (i != 0)
            i -= 1
            result.b = 0
            int32_t edx_4 = 0
            void* i_2 = i
            
            if (edi s> 0)
                do
                    if ((edx_4.b & 7) == 0)
                        char* ebx_1 = arg1
                        result.b = *ebx_1
                        arg1 = &ebx_1[1]
                    
                    i.b = result.b
                    i.b u>>= 7
                    *ecx = i.b
                    edx_4 += 1
                    ecx = &ecx[1]
                    result.b *= 2
                while (edx_4 s< edi)
                
                i = i_2
            
            arg1 += esi_3
            ecx = &ecx[edx]
    else if (i != 0)
        void* i_1 = i
        
        do
            i_1 -= 1
            result.b = 0
            int32_t edx_3 = 0
            
            if (edi s> 0)
                do
                    if ((edx_3.b & 7) == 0)
                        result.b = *arg1
                        arg1 += 1
                    
                    int32_t ebx
                    ebx.b = *((zx.d(result.b) u>> 7) + eax_1)
                    *ecx = ebx.b
                    edx_3 += 1
                    ecx = &ecx[1]
                    result.b *= 2
                while (edx_3 s< edi)
                
                esi_3 = var_14
            
            arg1 += esi_3
            ecx = &ecx[edx]
        while (i_1 != 0)
    
    return result
}
