// 函数名称: sub_62bd20
// 虚拟地址: 0x62bd20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_t (*sub_62bd20(int32_t* arg1))[0x4]
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    void* esi = arg1[0xb]
    uint32_t edi = zx.d(*(arg1 + 0x3f))
    
    if (edi == 0x80 && (*(esi + 0x14) | *(esi + 0x10) | *(esi + 0xc)) == 0xffffff)
        return sub_62bbf0(arg1)
    
    int32_t edx = arg1[6]
    int32_t eax_7 = arg1[4] s>> 2
    int32_t* edx_1 = *arg1
    int16_t (* result)[0x4] = arg1[5]
    int32_t ecx_2 = arg1[9] s>> 2
    int32_t ecx_3 = *(esi + 0x18)
    uint32_t ecx_6 = edi << 8 | edi
    int32_t var_34 = 0
    int32_t i = arg1[7]
    int32_t var_34_1 = ecx_3
    uint8_t temp0[0x8] = _m_punpckhwd(
        ((0xff << *(esi + 0x22) | 0xff << *(esi + 0x21) | 0xff << *(esi + 0x20))
            & (ecx_6 << 0x10 | ecx_6)).q, 
        0)
    int64_t st5 = ecx_3.q
    
    while (i != 0)
        int32_t ecx_23 = edx
        i -= 1
        int16_t st1[0x4]
        int16_t st2[0x4]
        
        if ((edx & 1) != 0)
            st2 = zx.q(*edx_1)
            st1 = _m_punpckhwd(zx.q(*result), 0)
            *result = (_m_packuswb(
                _m_paddb(_m_psrlwi(_m_pmullw(_m_psubw(_m_punpckhwd(st2, 0), st1), temp0), 8), st1), 0)
                | st5)[0].d
            edx_1 = &edx_1[1]
            result = &(*result)[2]
            ecx_23 = edx - 1
        
        int32_t j = ecx_23 s>> 1
        
        while (j s> 0)
            st1 = *edx_1
            st2 = *result
            int16_t st3[0x4] = st2
            st2 = _m_punpckhwd(st2, 0)
            st3 = _m_punpckhbw(st3, 0)
            *result = _m_packuswb(
                _m_paddb(_m_psrlwi(_m_pmullw(_m_psubw(_m_punpckhwd(st1, 0), st2), temp0), 8), st2), 
                _m_paddb(_m_psrlwi(_m_pmullw(_m_psubw(_m_punpckhbw(st1, 0), st3), temp0), 8), st3)) | st5
            j -= 1
            edx_1 = &edx_1[2]
            result = &result[1]
        
        edx_1 = &edx_1[eax_7]
        result = &(*result)[ecx_2 * 2]
    
    return result
}
