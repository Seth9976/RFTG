// 函数名称: sub_5d2a50
// 虚拟地址: 0x5d2a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5d2a50(uint32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* dwInstance_1 = arg1
    int32_t* dwInstance_1 = arg1
    int16_t var_8 = sub_5c8c60(dwInstance_1[1].w)
    arg1 = 0xffffffff
    
    if (arg2 != 0)
        if (arg3 == 0)
            uint32_t eax_8 = waveOutGetNumDevs()
            uint32_t uDeviceID_1 = 0
            
            if (eax_8 s<= 0)
                sub_5cce60("Requested device not found")
                return 0xffffffff
            
            do
                if (arg1 != 0xffffffff)
                    goto label_5d2b9e
                
                WAVEOUTCAPSW pwoc
                
                if (waveOutGetDevCapsW(uDeviceID_1, &pwoc, 0x54) == 0)
                    var_6c
                    int32_t var_88_5 = sub_5cd1d0(&var_6c) * 2 + 2
                    void* var_8c_4 = &var_6c
                    char* eax_12 = sub_5dd160("UTF-8", "UTF-16LE")
                    
                    if (eax_12 != 0)
                        if (sub_5cd590(arg2, eax_12) == 0)
                            arg1 = uDeviceID_1
                        
                        char* var_84_6 = eax_12
                        sub_5d0af0()
                
                uDeviceID_1 += 1
            while (uDeviceID_1 s< eax_8)
        else
            uint32_t eax_2
            int32_t ecx_1
            eax_2, ecx_1 = waveInGetNumDevs()
            uint32_t uDeviceID = 0
            
            if (eax_2 s<= 0)
                sub_5cce60("Requested device not found")
                return 0xffffffff
            
            do
                if (arg1 != 0xffffffff)
                    goto label_5d2b9e
                
                var_70
                
                if (waveInGetDevCapsW(uDeviceID, &var_70, 0x50) == 0)
                    var_68
                    int32_t var_88_2 = sub_5cd1d0(&var_68) * 2 + 2
                    void* var_8c_2 = &var_68
                    char* eax_5 = sub_5dd160("UTF-8", "UTF-16LE")
                    
                    if (eax_5 != 0)
                        if (sub_5cd590(arg2, eax_5) == 0)
                            arg1 = uDeviceID
                        
                        char* var_84_3 = eax_5
                        sub_5d0af0()
                
                uDeviceID += 1
            while (uDeviceID s< eax_2)
        
        if (arg1 == 0xffffffff)
            sub_5cce60("Requested device not found")
            return 0xffffffff
    
    label_5d2b9e:
    int32_t var_84_7 = 0x54
    int32_t eax_14 = sub_5d0ac0()
    dwInstance_1[0x28] = eax_14
    
    if (eax_14 == 0)
        sub_5cd050(eax_14)
        return 0xffffffff
    
    int32_t var_84_9 = 0x54
    int32_t var_88_7 = 0
    int32_t var_8c_5 = eax_14
    sub_5cd100()
    *(dwInstance_1[0x28] + 0x1c) = 0xffff
    *(dwInstance_1[0x28] + 0x3c) = 0xffff
    
    if (*(dwInstance_1 + 6) u> 2)
        *(dwInstance_1 + 6) = 2
    
    int32_t eax_16
    int32_t edx_3
    edx_3:eax_16 = sx.q(*dwInstance_1)
    int32_t eax_18 = (eax_16 + (edx_3 & 3)) s>> 2
    
    if (zx.d(dwInstance_1[2].w) s< eax_18)
        dwInstance_1[2].w = (eax_18.w + 3) & 0xfffc
    
    void pwfx
    
    while (true)
        if (var_8 == 0)
            sub_5d28d0(dwInstance_1)
            sub_5cce60("Unsupported audio format")
            return 0xffffffff
        
        uint32_t eax_21 = zx.d(var_8)
        bool cond:3_1
        
        if (eax_21 s> 0x8020)
            cond:3_1 = eax_21 == 0x8120
        label_5d2c37:
            
            if (not(cond:3_1))
                var_8 = sub_5c8ad0()
                continue
        else if (eax_21 != 0x8020 && eax_21 != 8)
            cond:3_1 = eax_21 == 0x8010
            goto label_5d2c37
        dwInstance_1[1].w = var_8
        
        if (sub_5d29b0(&pwfx, dwInstance_1, arg1, arg3) != 0)
            break
        
        var_8 = sub_5c8ad0()
    
    sub_5c8b00(dwInstance_1)
    HWAVEOUT* phwo = dwInstance_1[0x28]
    uint32_t dwInstance = dwInstance_1
    uint32_t eax_26
    
    if (arg3 == 0)
        eax_26 = waveOutOpen(phwo, arg1, &pwfx, sub_5d2750, dwInstance, CALLBACK_FUNCTION)
    else
        eax_26 = waveInOpen(&phwo[1], arg1, &pwfx, sub_5d2720, dwInstance, CALLBACK_FUNCTION)
    
    if (eax_26 != 0)
        sub_5d28d0(dwInstance_1)
        sub_5d2780(eax_26)
        return 0xffffffff
    
    *(dwInstance_1[0x28] + 8) = CreateSemaphoreW(nullptr, 1, 2, nullptr)
    int32_t i = 0
    
    if (*(dwInstance_1[0x28] + 8) == 0)
        sub_5d28d0(dwInstance_1)
        sub_5cce60("Couldn't create semaphore")
        return 0xffffffff
    
    int32_t var_84_15 = dwInstance_1[3] * 2
    *(dwInstance_1[0x28] + 0xc) = sub_5d0ac0()
    
    if (*(dwInstance_1[0x28] + 0xc) == 0)
        sub_5d28d0(dwInstance_1)
        sub_5cd050(0)
        return 0xffffffff
    
    arg2 = nullptr
    uint32_t result
    
    do
        int32_t var_84_17 = 0x20
        int32_t var_88_10 = 0
        int32_t var_8c_6 = i + dwInstance_1[0x28] + 0x10
        sub_5cd100()
        *(i + dwInstance_1[0x28] + 0x14) = dwInstance_1[3]
        *(i + dwInstance_1[0x28] + 0x20) = 1
        int32_t eax_34 = dwInstance_1[0x28]
        *(i + eax_34 + 0x10) = dwInstance_1[3] * arg2 + *(eax_34 + 0xc)
        int32_t* eax_35 = dwInstance_1[0x28]
        result = waveOutPrepareHeader(*eax_35, i + eax_35 + 0x10, 0x20)
        
        if (result != 0)
            sub_5d28d0(dwInstance_1)
            sub_5d2780(result)
            return 0xffffffff
        
        arg2 = &arg2[1]
        i += 0x20
    while (i s< 0x40)
    
    return result
}
