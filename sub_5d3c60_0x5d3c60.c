// 函数名称: sub_5d3c60
// 虚拟地址: 0x5d3c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d3c60(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t* ppv_3 = nullptr
    int32_t i = 0
    int16_t var_18 = sub_5c8c60(esi[1].w)
    arg1 = nullptr
    int32_t* var_c = nullptr
    int32_t var_1c = 0
    int32_t arg_c
    
    if (arg_c != 0)
        sub_5cce60("XAudio2: capture devices unsupported.")
        return 0xffffffff
    
    int32_t* ppv
    HRESULT eax_2 = CoCreateInstance(&data_6b5d38, 0, CLSCTX_INPROC_SERVER, &data_6b5d48, &ppv)
    bool cond:0 = eax_2 == 0
    
    if (eax_2 s>= 0)
        int32_t* ppv_1 = ppv
        int32_t eax_3 = (*(*ppv_1 + 0x14))(ppv_1, 0, 0xffffffff)
        int32_t* ppv_2 = ppv
        
        if (eax_3 s< 0)
            (*(*ppv_2 + 8))(ppv_2)
        else
            arg1 = ppv_2
            ppv_3 = ppv_2
        
        cond:0 = eax_3 == 0
    
    if (not(cond:0))
        sub_5cce60("XAudio2: XAudio2Create() failed at open.")
        return 0xffffffff
    
    if (arg2 != 0)
        void* eax_4 = *ppv_3
        arg_c = 0
        
        if ((*(eax_4 + 0xc))(ppv_3, &arg_c) != 0)
            (*(*ppv_3 + 8))(ppv_3)
            sub_5cce60("XAudio2: IXAudio2_GetDeviceCount() failed.")
            return 0xffffffff
        
        int32_t eax_7 = 0
        int32_t var_8_1 = 0
        
        if (arg_c u> 0)
            do
                void var_45c
                
                if ((*(*ppv_3 + 0x10))(ppv_3, eax_7, &var_45c) == 0)
                    int16_t var_25c[0x116]
                    int32_t var_470_3 = sub_5cd1d0(&var_25c) * 2 + 2
                    int16_t (* var_474_3)[0x116] = &var_25c
                    char* eax_10 = sub_5dd160("UTF-8", "UTF-16LE")
                    
                    if (eax_10 != 0)
                        int32_t eax_12 = sub_5cd590(eax_10, arg2)
                        int32_t edi_1 = neg.d(eax_12)
                        char* var_474_4 = eax_10
                        sub_5d0af0()
                        ppv_3 = arg1
                        
                        if (sbb.d(edi_1, edi_1, eax_12 != 0) != 0xffffffff)
                            var_1c = var_8_1
                            break
                
                eax_7 = var_8_1 + 1
                var_8_1 = eax_7
            while (eax_7 u< arg_c)
        
        if (var_8_1 == arg_c)
            (*(*ppv_3 + 8))(ppv_3)
            sub_5cce60("XAudio2: Requested device not found.")
            return 0xffffffff
    
    int32_t var_46c_8 = 0x1c
    int32_t eax_15 = sub_5d0ac0()
    esi[0x28] = eax_15
    
    if (eax_15 == 0)
        (*(*ppv_3 + 8))(ppv_3)
        sub_5cd050(0)
        return 0xffffffff
    
    int32_t var_46c_10 = 0x1c
    int32_t var_470_5 = 0
    int32_t var_474_5 = eax_15
    sub_5cd100()
    *esi[0x28] = ppv_3
    *(esi[0x28] + 0xc) = CreateSemaphoreW(nullptr, 1, 2, nullptr)
    
    if (*(esi[0x28] + 0xc) == 0)
        sub_5d3bb0(esi)
        sub_5cce60("XAudio2: CreateSemaphore() failed!")
        return 0xffffffff
    
    do
        if (var_18 == 0)
            if (i != 0)
                break
            
            sub_5d3bb0(esi)
            sub_5cce60("XAudio2: Unsupported audio format")
            return 0xffffffff
        
        uint32_t eax_19 = zx.d(var_18)
        
        if (eax_19 == 0x8120)
            esi[1].w = var_18
            i = 1
        
        if (eax_19 == 0x8020 || eax_19 == 8 || eax_19 == 0x8010)
            esi[1].w = var_18
            i = 1
        
        var_18 = sub_5c8ad0()
    while (i == 0)
    
    sub_5c8b00(esi)
    *(esi[0x28] + 0x14) = esi[3]
    int32_t var_470_6 = *(esi[0x28] + 0x14) * 2
    *(esi[0x28] + 0x10) = sub_5d0ac0()
    void* eax_23 = esi[0x28]
    int32_t ecx_12 = *(eax_23 + 0x10)
    
    if (ecx_12 == 0)
        sub_5d3bb0(esi)
        sub_5cd050(0)
        return 0xffffffff
    
    *(eax_23 + 0x18) = ecx_12
    void* eax_24 = esi[0x28]
    int32_t var_46c_15 = *(eax_24 + 0x14) * 2
    int32_t var_470_7 = 0
    int32_t var_474_6 = *(eax_24 + 0x10)
    sub_5cd100()
    
    if ((*(*ppv_3 + 0x28))(ppv_3, esi[0x28] + 8, 0, *esi, 0, var_1c, 0) != 0)
        sub_5d3bb0(esi)
        sub_5cce60("XAudio2: Couldn't create mastering voice")
        return 0xffffffff
    
    int32_t var_46c_17 = 0x12
    int32_t var_470_9 = 0
    int16_t var_30
    int16_t* var_474_7 = &var_30
    sub_5cd100()
    uint32_t eax_29 = zx.d(esi[1].w)
    
    if ((eax_29 & 0x100) == 0)
        var_30 = 1
    else
        var_30 = 3
    
    uint16_t ecx_14 = zx.w(*(esi + 6))
    int32_t edx_17 = *esi
    uint16_t eax_30 = zx.w(eax_29.b)
    uint16_t var_22 = eax_30
    eax_30 = (eax_30 u>> 3) * ecx_14
    uint16_t var_24 = eax_30
    int32_t var_2c = edx_17
    int32_t var_28 = zx.d(eax_30) * edx_17
    uint16_t var_2e = ecx_14
    void* ecx_15 = *ppv_3
    void* var_478_1 = ecx_15
    
    if ((*(ecx_15 + 0x20))(ppv_3, &var_c, &var_30, 6, fconvert.s(float.t(1)), &data_8baa34, 0, 0) != 0)
        sub_5d3bb0(esi)
        sub_5cce60("XAudio2: Couldn't create source voice")
        return 0xffffffff
    
    *(esi[0x28] + 4) = var_c
    
    if ((*(*ppv_3 + 0x2c))(ppv_3) != 0)
        sub_5d3bb0(esi)
        sub_5cce60("XAudio2: Couldn't start engine")
        return 0xffffffff
    
    int32_t* eax_36 = var_c
    
    if ((*(*eax_36 + 0x4c))(eax_36, 0, 0) == 0)
        return 0
    
    sub_5d3bb0(esi)
    sub_5cce60("XAudio2: Couldn't start source voice")
    return 0xffffffff
}
