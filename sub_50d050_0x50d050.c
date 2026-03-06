// 函数名称: sub_50d050
// 虚拟地址: 0x50d050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_50d050(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6936bc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_13c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = *(arg1 + 0x58)
    bool cond:0 = eax_3[1] == 2
    void* var_60 = arg1
    
    if (not(cond:0))
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_STRUCTURE", &data_83f3d3, "Structure.cpp", 0x550, 
            "StructureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_5 = sub_466320(eax_3)
    void* esi_1
    
    if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
        esi_1 = arg1 + 8
    else
        esi_1 = arg2 + 0x484
    
    int32_t var_94
    __builtin_memcpy(&var_94, esi_1, 0x24)
    float var_3c
    __builtin_memcpy(&var_3c, &var_94, 0x24)
    int32_t var_4c
    float var_30
    float* eax_7 = sub_465b90(&var_4c, &var_30)
    float ecx = eax_7[1]
    float var_7c
    long double x87_r7 = fconvert.t(var_7c)
    float var_38 = *eax_7
    var_3c = fconvert.s(x87_r7)
    float edx_1 = eax_7[2]
    int32_t eax_8 = eax_7[3]
    float var_34 = ecx
    int32_t ecx_1 = var_94
    var_30 = edx_1
    int32_t var_2c = eax_8
    int32_t var_28 = ecx_1
    int32_t var_90
    int32_t var_24 = var_90
    float var_8c[0x4]
    float var_20 = var_8c[0]
    void var_5c
    __builtin_memcpy(&var_5c, &var_3c, 0x20)
    sub_405f60(&var_8c, arg2 + 0x3c)
    __builtin_memcpy(&var_38, &var_8c, 0x20)
    char eax_10
    int80_t st0
    st0, eax_10 = sub_4e3770(arg2 + 0x40)
    
    if (eax_10 == 0)
        sub_4c5870("QuatIsValid(state.transform.t.r)", &data_83f3d3, "FabDef.cpp", 0x27c, 
            "FabModelDraw")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char eax_12
    int80_t st0_1
    st0_1, eax_12 = sub_4e3770(&var_34)
    
    if (eax_12 == 0)
        sub_4c5870("QuatIsValid(transform.r)", &data_83f3d3, "FabDef.cpp", 0x27d, "FabModelDraw")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi_2 = var_60
    int32_t edx_3 = *(edi_2 + 0x64)
    int32_t eax_14 = *(edi_2 + 0x68)
    var_4c = *(edi_2 + 0x60)
    int32_t var_48 = edx_3
    int32_t var_40 = *(edi_2 + 0x6c)
    int32_t var_44 = eax_14
    
    if (sub_4e3b60(&data_840b64, &var_4c) != 0)
        sub_4dd970(&var_4c)
    
    float* var_64 = nullptr
    
    if (**(edi_2 + 0x5c) != 0)
        if (*(arg2 + 0x4bc) == 0)
            int32_t* eax_17 = *(edi_2 + 0x58)
            
            if (eax_17 == 0)
                sub_4c5870("el.model != NULL", &data_83f3d3, "FabDef.cpp", 0x28a, "FabModelDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char** eax_19
            int32_t ecx_4
            eax_19, ecx_4 = sub_4d4870(eax_17)
            *(edi_2 + 0x5c)
            int32_t var_148_5 = ecx_4
            sub_517050(*(var_60 + 0x58), eax_19, 0, fconvert.s(float.t(0)), 0, 
                fconvert.s(fconvert.t(0.5f)))
            edi_2 = var_60
            *(arg2 + 0x4bc) = eax_19[0x1a]
        
        var_64 = sub_4d54b0()
        sub_4d4ab0()
    
    int32_t eax_22
    int32_t edx_7
    eax_22, edx_7 = sub_50cfb0(edi_2)
    float var_ac[0x6]
    void* ebx_4
    
    if (eax_22 == 0xffffffff)
        if (*(eax_5 + 0x28) != 0)
            ebx_4 = eax_5 + 0x24
            goto label_50d2fb
        
    label_50d3a5:
        
        if ((data_3165988 & 2) == 0)
            data_3165988.d |= 2
            int32_t var_8_3 = 1
            char** eax_29
            eax_29, edx_7 = sub_509140(5, "sys/draw3d.material")
            data_3165980 = eax_29
            int32_t var_8_4 = 0xffffffff
        
        void var_12c
        sub_406370(&var_12c, edx_7, &var_38)
        float* edx_10 = data_3165980
        __builtin_memcpy(&var_ac, &var_12c, 0x40)
        sub_4e0050(*(var_60 + 0x58), &var_ac, edx_10, 0f, var_64)
    else
        edx_7 = *(eax_5 + 0x2c)
        ebx_4 = edx_7 + eax_22 * 0xc + 4
    label_50d2fb:
        
        if (ebx_4 == 0)
            goto label_50d3a5
        
        if (data_be1e94 != 0)
            if ((data_3165988 & 1) == 0)
                data_3165988.d |= 1
                int32_t var_8_1 = 0
                data_3165984 = sub_509140(5, "sys/draw3d.material")
                int32_t var_8_2 = 0xffffffff
            
            sub_4e0710(*(edi_2 + 0x58), data_3165984, 0f, var_64)
        else
            void var_ec
            sub_406370(&var_ec, edx_7, &var_38)
            void* var_140_9 = nullptr
            int32_t var_144_6 = 0
            char** eax_26 = *(var_60 + 0x58)
            __builtin_memcpy(&var_ac, &var_ec, 0x40)
            sub_4e03f0(eax_26, &var_ac, ebx_4, var_64, var_144_6, var_140_9)
    char result = sub_4e3b60(&data_840b64, &var_4c)
    
    if (result != 0)
        result = 0x64
        sub_4dd970(&data_840b64)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
