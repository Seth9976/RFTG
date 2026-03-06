// 函数名称: sub_66f710
// 虚拟地址: 0x66f710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_66f710(uint32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    char* ebx = *edi
    
    if (ebx == 0)
        if (arg4 u>= 2)
            int32_t ebx_1 = edi[1]
            
            if (ebx_1 u< 0x4000 && *(arg3 + 0xb4) u> 1)
                uint32_t edx
                
                if (edi[2] == 0)
                    edx = zx.d(**(arg3 + 0xb0))
                else
                    edx = zx.d(**edi[4])
                
                if ((edx.b & 0xf) != 8 || (edx & 0xf0) u> 0x70)
                    sub_664320(arg3, "Invalid zlib compression method or flags in non-IDAT chunk")
                    noreturn
                
                uint32_t edx_2 = edx u>> 4
                int32_t i = 1 << (edx_2 + 7).b
                
                if (ebx_1 u<= i)
                    while (i u>= 0x100)
                        i u>>= 1
                        edx_2 -= 1
                        
                        if (ebx_1 u> i)
                            break
                
                int32_t edx_4 = edx_2 << 4 | 8
                
                if (edi[2] == 0)
                    **(arg3 + 0xb0) = edx_4.b
                    int32_t ecx_18 = zx.d(*(*(arg3 + 0xb0) + 1)) & 0xe0
                    ecx_18.b -= (modu.dp.d(0:((edx_4 << 8) + ecx_18), 0x1f)).b
                    ecx_18.b += 0x1f
                    *(*(arg3 + 0xb0) + 1) = ecx_18.b
                else if (zx.d(**edi[4]) != edx_4)
                    **edi[4] = edx_4.b
                    void* ecx_8 = *edi[4]
                    int32_t ecx_10 = zx.d(*(ecx_8 + 1)) & 0xe0
                    ecx_10.b -= (modu.dp.d(0:((edx_4 << 8) + ecx_10), 0x1f)).b
                    ecx_10.b += 0x1f
                    *(ecx_8 + 1) = ecx_10.b
        
        int32_t i_1 = 0
        
        if (edi[2] s> 0)
            do
                char* eax_7 = *(edi[4] + (i_1 << 2))
                int32_t ecx_11 = *(arg3 + 0xb4)
                
                if (eax_7 != 0 && ecx_11 != 0)
                    sub_666640(arg3, eax_7, ecx_11)
                    sub_662280(arg3, eax_7, ecx_11)
                
                sub_666530(arg3, *(edi[4] + (i_1 << 2)))
                i_1 += 1
            while (i_1 s< edi[2])
        
        if (edi[3] != 0)
            sub_666530(arg3, edi[4])
        
        int32_t eax_10 = *(arg3 + 0xb4)
        int32_t ecx_14 = *(arg3 + 0x88)
        
        if (ecx_14 u< eax_10)
            char* edi_2 = *(arg3 + 0xb0)
            int32_t eax_11 = eax_10 - ecx_14
            
            if (edi_2 != 0 && eax_11 != 0)
                sub_666640(arg3, edi_2, eax_11)
                sub_662280(arg3, edi_2, eax_11)
        
        sub_66f3a0(arg3)
    else if (arg3 != 0 && arg4 != 0)
        sub_666640(arg3, ebx, arg4)
        sub_662280(arg3, ebx, arg4)
}
