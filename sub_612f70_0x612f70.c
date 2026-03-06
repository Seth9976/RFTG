// 函数名称: sub_612f70
// 虚拟地址: 0x612f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_612f70(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t ecx = *(esi + 0x1c)
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(esi + 8) << 0x10)
    int32_t ebx = 0
    int32_t var_c = 0
    int32_t var_8 = 0
    int32_t result = divs.dp.d(sx.q(*(esi + 4) << 0x10), *(esi + 0x18))
    int32_t result_1 = result
    
    if (ecx != 0)
        do
            result = *(esi + 0x14)
            int32_t i = *(esi + 0x18)
            *(esi + 0x1c) -= 1
            arg1 = 0xffffffff
            int32_t edx_2 = 0x10000
            int32_t* ecx_1 = nullptr
            
            if (ebx s>= 0x10000)
                uint32_t eax_8 = ebx u>> 0x10
                var_c += eax_8
                var_8 += eax_8 * 0xffff0000
            
            while (i != 0)
                i -= 1
                
                if (edx_2 s>= 0x10000)
                    uint32_t ecx_3 = edx_2 u>> 0x10
                    arg1 += ecx_3
                    edx_2 += ecx_3 * 0xffff0000
                    ecx_1 = *(esi + 0xc) * var_c + (arg1 << 2) + *esi
                
                edx_2 += result_1
                *result = *ecx_1
                result += 4
            
            ebx = var_8 + divs.dp.d(edx:eax_2, ecx)
            *(esi + 0x14) += *(esi + 0x20)
            var_8 = ebx
        while (*(esi + 0x1c) != 0)
    
    *(esi + 0x1c) -= 1
    return result
}
