// 函数名称: sub_601720
// 虚拟地址: 0x601720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_601720(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    uint32_t var_c = 0
    void* lplpBuffer = nullptr
    uint32_t puLen = 0
    
    if (esi u>= 2)
        return 0
    
    HKL param0 = *(arg1 + 0x14e4)
    
    if (data_bf8094 != param0)
        uint32_t ecx_1 = zx.d(param0.w)
        data_bf8094 = param0
        
        if (*(arg1 + 0x1504) != 0 && param0.w == 0x404)
            data_bf809c = 0
            data_bf8098 = 0x7000404
            return 0x7000404
        
        void var_114
        
        if ((param0 == 0xe0080404 || param0 == 0xe0090404 || param0 == 0xe00a0404
                || param0 == 0xe00b0404 || param0 == 0xe00e0804)
                && ImmGetIMEFileNameA(param0, &var_114, 0xff) != 0 && *(arg1 + 0x14ec) == 0)
            if (CompareStringA(0x409, 1, &var_114, 0xffffffff, "TINTLGNT.IME", 0xffffffff) != CSTR_EQUAL
                    && CompareStringA(0x409, 1, &var_114, 0xffffffff, "CINTLGNT.IME", 0xffffffff)
                    != CSTR_EQUAL && CompareStringA(0x409, 1, &var_114, 0xffffffff, "MSTCIPHA.IME", 0xffffffff)
                    != CSTR_EQUAL && CompareStringA(0x409, 1, &var_114, 0xffffffff, "PINTLGNT.IME", 0xffffffff)
                    != CSTR_EQUAL && CompareStringA(0x409, 1, &var_114, 0xffffffff, "MSSCIPYA.IME", 0xffffffff)
                    != CSTR_EQUAL)
                data_bf809c = 0
                data_bf8098 = 0
                return (&data_bf8098)[arg2]
            
            uint32_t dwLen = GetFileVersionInfoSizeA(&var_114, &var_c)
            
            if (dwLen != 0)
                uint32_t dwLen_1 = dwLen
                int32_t eax_8 = sub_5d0ac0()
                
                if (eax_8 != 0 && GetFileVersionInfoA(&var_114, var_c, dwLen, eax_8) != 0
                        && VerQueryValueA(eax_8, 0x6b0360, &lplpBuffer, &puLen) != 0)
                    void* lplpBuffer_1 = lplpBuffer
                    int32_t ecx_4 = *(lplpBuffer_1 + 8)
                    int32_t eax_14 = (zx.d(ecx_4.b) << 8 | (ecx_4 & 0xffff0000)) << 8
                    
                    if (*(arg1 + 0x14ec) != 0)
                    label_601998:
                        data_bf8098 = eax_14 | ecx_1
                        int32_t var_124_5 = eax_8
                        data_bf809c = *(lplpBuffer_1 + 0xc)
                        sub_5d0af0()
                        return data_bf8098
                    
                    if (ecx_1 != 0x404)
                        if (ecx_1 == 0x804
                                && (eax_14 == 0x4010000 || eax_14 == 0x4020000 || eax_14 == 0x5030000))
                            goto label_601998
                    else if (eax_14 == 0x4020000 || eax_14 == 0x4030000 || eax_14 == 0x4040000
                            || eax_14 == 0x5000000 || eax_14 == 0x5010000 || eax_14 == 0x5020000
                            || eax_14 == 0x6000000)
                        goto label_601998
                
                int32_t var_124_4 = eax_8
                sub_5d0af0()
            
            esi = arg2
        
        data_bf809c = 0
        data_bf8098 = 0
    
    return (&data_bf8098)[esi]
}
