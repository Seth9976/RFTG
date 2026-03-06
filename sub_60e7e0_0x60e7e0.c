// 函数名称: sub_60e7e0
// 虚拟地址: 0x60e7e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_60e7e0(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t __saved_edi = 0x138
    int32_t __saved_edi = 0x138
    int32_t __saved_esi = 1
    void* result = sub_5d0ad0()
    
    if (result == 0)
        sub_5cd050(result)
        return 0
    
    int32_t __saved_esi_1 = 0x88
    int32_t var_33c = 1
    struct HINSTANCE__** eax_1 = sub_5d0ad0()
    
    if (eax_1 == 0)
        void* __saved_esi_2 = result
        sub_5d0af0()
        sub_5cd050(eax_1)
        return 0
    
    if (sub_5d4980(eax_1, &eax_1[1]) != 0)
        int32_t i_1 = 0x32
        int32_t i
        
        do
            int32_t i_2 = i_1
            char var_1fc[0x34]
            sub_5ce6a0(&var_1fc, 0x32, "D3DX9_%02d.dll")
            void* var_350_1 = sub_5cd1b0(&var_1fc) + 1
            char (* var_354_1)[0x34] = &var_1fc
            PWSTR lpLibFileName = sub_5dd160("UTF-16LE", "UTF-8")
            PWSTR lpLibFileName_1 = lpLibFileName
            eax_1[0x1f] = LoadLibraryW(lpLibFileName)
            sub_5d0af0()
            HMODULE eax_9 = eax_1[0x1f]
            
            if (eax_9 != 0)
                int32_t eax_10 = sub_5defa0(eax_9, "D3DXCreateMatrixStack")
                
                if (eax_10 != 0)
                    eax_10(0, &eax_1[0x20])
                    break
            
            i = i_1 - 1
            i_1 = i
        while (i s> 0)
        
        if (eax_1[0x20] == 0)
            BOOL eax_12 = eax_1[0x1f]
            
            if (eax_12 != 0)
                sub_5df000(eax_12)
    
    if (eax_1[1] == 0 || eax_1[0x20] == 0)
        void* result_1 = result
        sub_5d0af0()
        struct HINSTANCE__** var_340_11 = eax_1
        sub_5d0af0()
        sub_5cce60("Unable to create Direct3D interface")
        return 0
    
    *(result + 4) = sub_60cc40
    *(result + 0xc) = sub_60cca0
    *(result + 0x1c) = sub_60cf00
    *(result + 0x20) = sub_60d050
    *(result + 0x24) = sub_60d130
    *(result + 0x28) = sub_60d270
    *(result + 0x2c) = sub_60da20
    *(result + 0x30) = sub_60d300
    *(result + 0x34) = sub_60d3e0
    *(result + 0x38) = sub_60dac0
    *(result + 0x3c) = sub_60dc20
    *(result + 0x40) = sub_60ddd0
    *(result + 0x44) = sub_60dfd0
    *(result + 0x48) = sub_60e140
    *(result + 0x4c) = sub_60e3a0
    *(result + 0x50) = sub_60d600
    *(result + 0x54) = sub_60e760
    *(result + 0x58) = sub_60d7c0
    *(result + 0x5c) = sub_60d820
    __builtin_memcpy(result + 0x68, &data_8bae5c, 0x54)
    *(result + 0x134) = eax_1
    *(result + 0x6c) = 2
    int16_t var_24 = 2
    char var_22 = 1
    sub_5caa00(arg1, &var_24)
    int32_t eax_13 = sub_5c9760(arg1)
    int32_t var_18
    int32_t var_14
    sub_5c9bb0(arg1, &var_14, &var_18)
    int32_t var_1c8
    sub_5c9530(arg1, &var_1c8)
    int32_t var_35c = 0x38
    int32_t var_360 = 0
    int32_t var_5c
    int32_t* var_364 = &var_5c
    sub_5cd100()
    int32_t eax_14 = var_18
    var_5c = var_14
    int32_t var_58 = eax_14
    int32_t ecx_4 = eax_13 & 1
    
    if (ecx_4 == 0)
        int32_t var_54_1 = 0
    else
        int32_t var_54 = sub_60ca70(var_1c8)
    
    int32_t var_50 = 1
    int32_t var_44 = 1
    
    if (ecx_4 == 0 || (eax_13 & 0x1001) == 0x1001)
        int32_t var_2c_1 = 0
        int32_t var_3c_1 = 1
    else
        int32_t var_3c = 0
        int32_t var_1bc
        int32_t var_2c = var_1bc
    
    int32_t edx_1
    edx_1.b = arg2
    edx_1.b &= 4
    uint32_t eax_17 = zx.d(edx_1.b)
    int32_t eax_18 = neg.d(eax_17)
    int32_t eax_23 = sub_5d49f0(sub_5c9350(arg1))
    int32_t* ecx_6 = eax_1[1]
    eax_1[3] = eax_23
    void var_32c
    (*(*ecx_6 + 0x38))(ecx_6, eax_23, 1, &var_32c)
    int32_t var_310
    int32_t esi_4 = var_310 & 0x10000
    int32_t esi_5 = neg.d(esi_4)
    int32_t esi_8 = (sbb.d(esi_5, esi_5, esi_4 != 0) & 0x20) + 0x22
    int32_t eax_25 = sub_5cec90("SDL_RENDER_DIRECT3D_THREADSAFE")
    
    if (eax_25 != 0)
        int32_t var_33c_9 = eax_25
        
        if (sub_5cd570() != 0)
            esi_8 |= 4
    
    int32_t* eax_27 = eax_1[1]
    int32_t var_1c
    int32_t eax_28 = (*(*eax_27 + 0x40))(eax_27, eax_1[3], 1, var_1c, esi_8, &var_5c, &eax_1[2])
    
    if (eax_28 s< 0)
        char const* const var_340_5 = "CreateDevice()"
        sub_60c740(eax_28, sub_60d820(result))
        return 0
    
    int32_t* eax_31 = eax_1[2]
    int32_t* var_10
    int32_t eax_33 = (*(*eax_31 + 0x38))(eax_31, 0, &var_10)
    
    if (eax_33 s< 0)
        char const* const var_340_6 = "GetSwapChain()"
        sub_60c740(eax_33, sub_60d820(result))
        return 0
    
    int32_t* eax_36 = var_10
    int32_t eax_38 = (*(*eax_36 + 0x24))(eax_36, &var_5c)
    int32_t* eax_39 = var_10
    (*(*eax_39 + 8))(eax_39)
    
    if (eax_38 s< 0)
        char const* const var_340_8 = "GetPresentParameters()"
        sub_60c740(eax_38, sub_60d820(result))
        return 0
    
    if ((sbb.d(eax_18, eax_18, eax_17 != 0) & 0x80000001) == 0x80000001)
        *(result + 0x6c) |= 4
    
    __builtin_memcpy(&eax_1[4], &var_5c, 0x38)
    int32_t* eax_42 = eax_1[2]
    (*(*eax_42 + 0x1c))(eax_42, &var_32c)
    int32_t var_2d4
    *(result + 0xb4) = var_2d4
    int32_t var_2d0
    *(result + 0xb8) = var_2d0
    int32_t var_23c
    
    if (var_23c u>= 2)
        *(result + 0x6c) |= 8
    
    int32_t var_30c
    
    if ((var_30c & 0x20000) != 0)
        eax_1[0x14] = 1
    
    int32_t* eax_44 = eax_1[2]
    (*(*eax_44 + 0x98))(eax_44, 0, &eax_1[0x1d])
    eax_1[0x1e] = 0
    sub_60cad0(eax_1)
    int32_t var_294
    
    if (var_294 u>= 3)
        int32_t var_160_1 = 0x3f94fdf4
        int32_t var_180
        __builtin_memcpy(&var_180, 
            "\x51\x00\x00\x05\x02\x00\x0f\xa0\xf4\xfd\x94\x3f\x27\x31\xc8\xbe\xc5\x20\x50\xbf", 0x14)
        int32_t var_168_1 = 0x5000051
        int32_t var_150
        __builtin_memcpy(&var_150, 
            "\x1f\x00\x00\x02\x00\x00\x00\x80\x00\x00\x03\xb0\x1f\x00\x00\x02\x00\x00\x00\x80\x00\x00\x0f\x"
        "90\x1f\x00\x00\x02\x00\x00\x00\x90\x00\x08\x0f\xa0\x1f\x00\x00\x02\x00\x00\x00\x90\x01\x08\x0f"
        "a0\x1f\x00\x00\x02\x00\x00\x00\x90\x02\x08\x0f\xa0\x42\x00\x00\x03\x00\x00\x0f\x80\x00\x00\xe4"
        "b0\x00\x08\xe4\xa0\x42\x00\x00\x03\x01\x00\x0f\x80\x00\x00\xe4\xb0\x01\x08\xe4\xa0\x42\x00\x00"
        "03\x02\x00\x0f\x80\x00\x00\xe4\xb0\x02\x08\xe4\xa0\x01\x00\x00\x02\x00\x00\x02\x80\x01\x00\x00"
        "80\x01\x00\x00\x02\x00\x00\x04\x80\x"
        "
            0xf4)
        int32_t var_1b4
        __builtin_memcpy(&var_1b4, 
            "\x00\x02\xff\xff\x51\x00\x00\x05\x00\x00\x0f\xa0\x00\x00\x80\xbd\x00\x00\x00\xbf\x00\x00\x00\x"
        "bf\x00\x00\x80\x3f\x51\x00\x00\x05\x01\x00\x0f\xa0\xf4\xfd\x94\x3f", 
            0x28)
        int32_t var_18c_1 = 0
        int32_t var_188_1 = 0x3fcc49ba
        int32_t var_184_1 = 0
        int32_t var_16c_1 = 0
        int32_t var_164_1 = 0xa00f0003
        int32_t var_15c_1 = 0x400126e9
        int32_t var_158_1 = 0
        int32_t var_154_1 = 0
        int32_t* eax_46 = eax_1[2]
        int32_t eax_47
        int32_t edx_13
        eax_47, edx_13 = (*(*eax_46 + 0x1a8))(eax_46, &var_1b4, &eax_1[0x21])
        
        if (eax_47 s>= 0)
            *(result + (*(result + 0x70) << 2) + 0x74) = 0x32315659
            *(result + 0x70) += 1
            *(result + (*(result + 0x70) << 2) + 0x74) = 0x56555949
            *(result + 0x70) += 1
            return result
        
        char const* const var_33c_20 = "CreatePixelShader()"
        sub_60c740(eax_47, edx_13)
    
    return result
}
