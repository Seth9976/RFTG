// 函数名称: sub_5f2950
// 虚拟地址: 0x5f2950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f2950(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = arg1
    int32_t ecx = arg1
    int32_t edx = *(ecx + 0x18)
    int32_t ebx = edx << 2
    int32_t esi = *(ecx + 0x10)
    int16_t* edi = esi + edx - 8
    int32_t var_8 = sx.d(rol.w(edi[3], 8))
    int32_t var_c = sx.d(rol.w(edi[2], 8))
    int32_t var_10 = sx.d(rol.w(edi[1], 8))
    void* eax = esi + ebx - 0x20
    int32_t var_24 = ebx
    int32_t var_20 = esi
    int32_t var_14 = sx.d(rol.w(*edi, 8))
    void* var_1c
    int32_t var_18
    
    if (eax u>= esi)
        while (true)
            ecx.w = edi[3]
            int32_t edx_8
            edx_8.w = edi[2]
            esi.w = edi[1]
            ebx.w = *edi
            var_1c = edi - 8
            ecx.w = rol.w(ecx.w, 8)
            edx_8.w = rol.w(edx_8.w, 8)
            esi.w = rol.w(esi.w, 8)
            ebx.w = rol.w(ebx.w, 8)
            var_18 = sx.d(ebx.w)
            ecx = sx.d(ecx.w)
            *(eax + 0x1e) = ((var_8 * 3 + ecx) s>> 2).w
            edx_8 = sx.d(edx_8.w)
            *(eax + 0x1c) = ((var_c * 3 + edx_8) s>> 2).w
            esi = sx.d(esi.w)
            *(eax + 0x1a) = ((var_10 * 3 + esi) s>> 2).w
            *(eax + 0x18) = ((var_14 * 3 + var_18) s>> 2).w
            *(eax + 0x16) = ((var_8 + ecx) s>> 1).w
            *(eax + 0x14) = ((var_c + edx_8) s>> 1).w
            *(eax + 0x12) = ((var_10 + esi) s>> 1).w
            *(eax + 0x10) = ((var_14 + var_18) s>> 1).w
            *(eax + 0xe) = ((ecx * 3 + var_8) s>> 2).w
            *(eax + 0xc) = ((edx_8 * 3 + var_c) s>> 2).w
            *(eax + 0xa) = ((esi * 3 + var_10) s>> 2).w
            *(eax + 8) = ((var_18 * 3 + var_14) s>> 2).w
            *(eax + 6) = ecx.w
            *(eax + 4) = edx_8.w
            *(eax + 2) = esi.w
            *eax = var_18.w
            var_8 = ecx
            var_c = edx_8
            var_10 = esi
            var_14 = var_18
            eax -= 0x20
            
            if (eax u< var_20)
                break
            
            edi = var_1c
        
        ebx = var_24
        ecx = arg1
    
    *(ecx + 0x50) += 1
    int32_t result = *(ecx + 0x50)
    *(ecx + 0x18) = ebx
    
    if (*(ecx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ecx + (result << 2) + 0x28))(ecx, arg2, var_24, var_20, var_1c, var_18, var_14, var_10, 
        var_c, var_8)
}
