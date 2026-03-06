// 函数名称: sub_62cf50
// 虚拟地址: 0x62cf50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_t*sub_62cf50(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    uint32_t edi = zx.d(*(arg1 + 0x3f))
    
    if (edi == 0x80)
        int32_t var_44 = 0xfbde
        int32_t eax
        int32_t ecx
        return sub_62ca10(eax, arg1, ecx)
    
    int32_t i_2 = arg1[6]
    int32_t ecx_1 = arg1[7]
    int16_t* esi = *arg1
    int32_t edi_1 = edi & 0xfffffff8
    uint32_t edi_2 = edi_1 u>> 3
    int32_t var_34 = 0
    uint16_t st0[0x4] = edi_1.q
    int32_t var_34_1 = 0x7c007c00
    uint16_t temp0[0x4] = _m_punpcklwd(st0, st0[0].d)
    st0 = _m_punpckldq(temp0, temp0[0].d)
    int32_t eax_2 = arg1[4]
    int32_t var_1c = ecx_1
    int16_t* ecx_2 = arg1[5]
    int32_t edx_1 = arg1[9]
    st0 = _m_psllqi(st0, 3)
    int64_t st1 = 0x7c007c00.q
    int32_t var_34_2 = 0x3e003e0
    int64_t st3 = 0x3e003e0.q
    int32_t i = eax_2 s>> 1
    int32_t var_34_3 = 0x1f001f
    int64_t st2 = 0x1f001f.q
    
    if (var_1c != 0)
        int32_t edi_4 = i_2 & 1
        int32_t var_28_1 = edi_4
        
        while (true)
            var_1c -= 1
            i = i_2
            int32_t i_1 = i
            
            if (edi_4 != 0)
                uint32_t eax_4 = zx.d(*ecx_2)
                uint32_t edi_5 = zx.d(*esi)
                int32_t edx_7 = (eax_4 << 0x10 | eax_4) & 0x3e07c1f
                int32_t eax_13 = ((((((edi_5 << 0x10 | edi_5) & 0x3e07c1f) - edx_7) * edi_2) u>> 5)
                    + edx_7) & 0x3e07c1f
                *ecx_2 = (eax_13 u>> 0x10).w | eax_13.w
                esi = &esi[1]
                ecx_2 = &ecx_2[1]
                i = i_2 - 1
                i_1 = i
            
            if ((i.b & 2) != 0)
                uint32_t edx_11 = zx.d(*ecx_2)
                uint32_t edi_6 = zx.d(*esi)
                int32_t eax_18 = (edx_11 << 0x10 | edx_11) & 0x3e07c1f
                int32_t edx_20 = ((((((edi_6 << 0x10 | edi_6) & 0x3e07c1f) - eax_18) * edi_2) u>> 5)
                    + eax_18) & 0x3e07c1f
                *ecx_2 = (edx_20 u>> 0x10).w | edx_20.w
                uint32_t edx_21 = zx.d(ecx_2[1])
                uint32_t edi_7 = zx.d(esi[1])
                int32_t eax_25 = (edx_21 << 0x10 | edx_21) & 0x3e07c1f
                int32_t edx_30 = ((((((edi_7 << 0x10 | edi_7) & 0x3e07c1f) - eax_25) * edi_2) u>> 5)
                    + eax_25) & 0x3e07c1f
                ecx_2[1] = (edx_30 u>> 0x10).w | edx_30.w
                esi = &esi[2]
                ecx_2 = &ecx_2[2]
                i = i_1 - 2
            
            int32_t var_38_3
            int16_t st4[0x4]
            int64_t st5
            int16_t st6[0x4]
            
            if ((i.b & 4) != 0)
                st4 = *esi
                st5 = *ecx_2
                var_38_3.q = st5
                st5 &= st1
                st5 = _m_paddw(st5, _m_psllwi(_m_pmulhw(_m_psubw(st4 & st1, st5), st0), 5)) & st1
                int64_t st7 = var_38_3.q & st3
                st6 = _m_paddw(_m_psllwi(_m_pmulhw(_m_psubw(st4 & st3, st7), st0), 5), st7) | st5
                st5 = var_38_3.q & st2
                *ecx_2 = st6
                    | (_m_paddw(_m_psrlwi(_m_pmullw(_m_psubw(st4 & st2, st5), st0), 0xb), st5) & st2)
                esi = &esi[4]
                ecx_2 = &ecx_2[4]
                i -= 4
            
            if (i != 0)
                int32_t eax_29
                int32_t edx_31
                edx_31:eax_29 = sx.q(i)
                i = (eax_29 + (edx_31 & 7)) s>> 3
                
                do
                    st4 = *esi
                    st5 = *ecx_2
                    var_38_3.q = st5
                    st5 &= st1
                    st5 = _m_paddw(st5, _m_psllwi(_m_pmulhw(_m_psubw(st4 & st1, st5), st0), 5)) & st1
                    int64_t var_18_2 = var_38_3.q & st3
                    st6 =
                        _m_paddw(_m_psllwi(_m_pmulhw(_m_psubw(st4 & st3, var_18_2), st0), 5), var_18_2)
                        | st5
                    st5 = var_38_3.q & st2
                    *ecx_2 = st6 | (
                        _m_paddw(_m_psrlwi(_m_pmullw(_m_psubw(st4 & st2, st5), st0), 0xb), st5) & st2)
                    st4 = *(esi + 8)
                    st5 = *(ecx_2 + 8)
                    var_38_3.q = st5
                    st5 &= st1
                    st5 = _m_paddw(st5, _m_psllwi(_m_pmulhw(_m_psubw(st4 & st1, st5), st0), 5)) & st1
                    int64_t var_18_3 = var_38_3.q & st3
                    st6 =
                        _m_paddw(_m_psllwi(_m_pmulhw(_m_psubw(st4 & st3, var_18_3), st0), 5), var_18_3)
                        | st5
                    st5 = var_38_3.q & st2
                    *(ecx_2 + 8) = st6 | (
                        _m_paddw(_m_psrlwi(_m_pmullw(_m_psubw(st4 & st2, st5), st0), 0xb), st5) & st2)
                    i -= 1
                    esi = &esi[8]
                    ecx_2 = &ecx_2[8]
                while (i s> 0)
            
            esi = &esi[i]
            ecx_2 = &ecx_2[edx_1 s>> 1]
            
            if (var_1c == 0)
                break
            
            edi_4 = var_28_1
    
    return i
}
