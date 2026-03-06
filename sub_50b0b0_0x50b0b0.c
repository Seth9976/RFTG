// 函数名称: sub_50b0b0
// 虚拟地址: 0x50b0b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_50b0b0(char** arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690008
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t performanceCount_2
    QueryPerformanceCounter(&performanceCount_2)
    int32_t performanceCount = performanceCount_2
    char** result
    char** result_1
    
    if (arg1 != 0)
        if (arg1[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = arg1
        result_1 = arg1
    else
        result_1 = sub_50a390(arg1 + 3)
        result = result_1
    
    if (*result_1 == 0)
        sub_5094d0(result_1, 0, 1)
    
    result_1[7] = &result_1[7][1]
    int32_t* edi_1 = **result_1
    int32_t var_8_1 = 0
    int32_t* edi_2 = *edi_1
    int32_t eax_7 = edi_2[3] * arg3 + arg4
    
    if (eax_7 s>= edi_2[0xd])
        sub_4c5870("imageIndex < pTextureData->imageCount", &data_83f3d3, "Texture.cpp", 0x13b, 
            "TextureLoad")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void** ebx = edi_2[0xf] + (eax_7 << 3)
    uint32_t eax_10 = *edi_2 u>> arg4.b
    uint32_t var_1c = 1
    
    if (eax_10 u>= 1)
        var_1c = eax_10
    
    uint32_t eax_12 = edi_2[1] u>> arg4.b
    uint32_t var_34 = 1
    
    if (eax_12 u>= 1)
        var_34 = eax_12
    
    int32_t* eax_13 = data_3078804
    int32_t var_14 = 1
    int32_t var_18
    int128_t* eax_14
    int32_t edx_4
    eax_14, edx_4 = (*(*eax_13 + 0x18))(arg1, arg2, arg4, arg3, &var_18, &var_14)
    
    if (eax_14 == 0)
        sub_4c5870("pBits", &data_83f3d3, "Texture.cpp", 0x146, "TextureLoad")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* eax_17 = edi_1[3]
    char* var_38_1 = eax_17
    
    if (eax_17 != 0 && *eax_17 != 0)
        if (var_14 != 1)
            sub_4c5870("divisor == 1", &data_83f3d3, "Texture.cpp", 0x14c, "TextureLoad")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        edi_2[1]
        void* eax_20 = sub_554170(edi_2[5], edx_4, *edi_2)
        sub_5ab990(eax_14, *(var_38_1 + 0xc), eax_20, eax_2)
    else if (edi_2[4] != 8)
        int32_t eax_29 = edi_2[5]
        
        if (eax_29 s< 0xd || (eax_29 s> 0x12 && eax_29 != 0x15))
            int32_t ecx_12 = var_18
            
            if (ecx_12 == 0)
                sub_4c5870("destPitch != 0", &data_83f3d3, "Texture.cpp", 0x183, "TextureLoad")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t var_54_1 = var_1c
            int32_t var_48_1 = eax_29
            void* eax_33 = *ebx
            int128_t* var_58 = eax_14
            uint32_t var_50_1 = var_34
            int32_t var_4c_1 = ecx_12
            char* eax_34 = sub_4cce80(eax_33)
            sub_5093d0(arg1, nullptr, ebx[1], *ebx, eax_34)
            struct _EXCEPTION_REGISTRATION_RECORD* edx_11 = edi_2[4]
            int32_t var_70_7 = var_14
            char* var_74_2 = eax_34
            
            if (sub_551f30(*ebx, &var_58, edx_11, eax_34, edx_11) == 0)
                char* const eax_40 = arg1[8]
                
                if (eax_40 == 0)
                    eax_40 = &data_83f3d3
                
                char* const var_70_8 = eax_40
                sub_4c5680("Failed to read texture %s")
            
            if (eax_34 != 0)
                _aligned_free_base(eax_34)
        else
            if (var_14 != 1)
                sub_4c5870("divisor == 1", &data_83f3d3, "Texture.cpp", 0x17e, "TextureLoad")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_5093d0(arg1, nullptr, ebx[1], *ebx, eax_14)
    else
        if (var_14 != 1)
            sub_4c5870("divisor == 1", &data_83f3d3, "Texture.cpp", 0x152, "TextureLoad")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (var_18 == 0)
            sub_4c5870("destPitch != 0", &data_83f3d3, "Texture.cpp", 0x153, "TextureLoad")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_23 = sub_5540b0(edi_2[5], var_1c)
        var_38_1 = eax_23
        
        if (var_18 != eax_23)
            int128_t* edi_4 = eax_14
            void* var_1c_1 = nullptr
            int32_t i_1 = 0
            
            if (edi_2[1] s> 0)
                int32_t i
                
                do
                    sub_5093d0(arg1, var_1c_1, ebx[1], eax_23, edi_4)
                    eax_23 = var_38_1
                    edi_4 += var_18
                    var_1c_1 += eax_23
                    i = i_1 + 1
                    i_1 = i
                while (i s< edi_2[1])
        else
            void* esi_3 = *ebx
            
            if (eax_23 * var_1c != esi_3)
                sub_4c5870("mipWidth * sourcePitch == pImage->imageSize", &data_83f3d3, "Texture.cpp", 
                    0x159, "TextureLoad")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_5093d0(arg1, nullptr, ebx[1], esi_3, eax_14)
    
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    int32_t performanceCount_3 = performanceCount_1
    int32_t performanceCount_5 = performanceCount
    int32_t var_28
    
    if (sub_4c5f30(performanceCount_3 - performanceCount_5, 
            sbb.d(var_38_1, var_28, performanceCount_3 u< performanceCount_5)) s> 0x64)
        QueryPerformanceCounter(&performanceCount)
        int32_t performanceCount_4 = performanceCount
        uint32_t eax_45 = sub_4c5f30(performanceCount_4 - performanceCount_5, 
            sbb.d(var_28, var_28, performanceCount_4 u< performanceCount_5))
        char* const ecx_20 = arg1[8]
        
        if (ecx_20 == 0)
            ecx_20 = &data_83f3d3
        
        uint32_t var_70_14 = eax_45
        char* const var_74_5 = ecx_20
        sub_4c5680("slow loading texture %s %d ms")
    
    (*(*data_3078804 + 0x1c))(arg1, arg2, arg4, arg3)
    result[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
