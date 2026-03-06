// 函数名称: sub_61eb70
// 虚拟地址: 0x61eb70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_61eb70(void* arg1)
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
    *(esi + 0x18)
    int32_t i = divs.dp.d(sx.q(*(esi + 4) << 0x10), *(esi + 0x18))
    int32_t i_1 = i
    
    if (ecx != 0)
        do
            void* eax_7 = *(esi + 0x14)
            *(esi + 0x1c) -= 1
            int32_t edx_3 = 0x10000
            int32_t* edi_1 = nullptr
            void* var_10_1 = eax_7
            i = *(esi + 0x18)
            arg1 = 0xffffffff
            
            if (ebx s>= 0x10000)
                uint32_t ecx_2 = ebx u>> 0x10
                var_c += ecx_2
                var_8 += ecx_2 * 0xffff0000
            
            for (; i != 0; i -= 1)
                if (edx_3 s>= 0x10000)
                    uint32_t ecx_5 = edx_3 u>> 0x10
                    void* eax_10 = arg1 + ecx_5
                    edx_3 += ecx_5 * 0xffff0000
                    edi_1 = *(esi + 0xc) * var_c + (eax_10 << 2) + *esi
                    arg1 = eax_10
                
                int32_t ecx_9 = *edi_1
                edx_3 += i_1
                uint32_t* eax_14 = var_10_1
                *eax_14 = (ecx_9 u>> 0x18 << 8 | zx.d((ecx_9 u>> 0x10).b)) << 8 | zx.d((ecx_9 u>> 8).b)
                var_10_1 = &eax_14[1]
            
            ebx = var_8 + divs.dp.d(edx:eax_2, ecx)
            *(esi + 0x14) += *(esi + 0x20)
            var_8 = ebx
        while (*(esi + 0x1c) != 0)
    
    *(esi + 0x1c) -= 1
    return i
}
