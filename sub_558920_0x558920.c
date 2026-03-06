// 函数名称: sub_558920
// 虚拟地址: 0x558920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_558920(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691908
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_6c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ecx = data_27e7fd8
    
    if (*(ecx + 4) == 0)
        sub_4c5870("pSoundInterface->mDevice", &data_83f3d3, "Windows\WindowsSound.cpp", 0xa5, 
            "DxSoundCreateBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char** eax_5 = *arg1
    char** var_50
    char** esi
    
    if (eax_5 != 0)
        if (eax_5[1] != 0x15)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_50 = eax_5
        esi = eax_5
    else
        esi = sub_50a390(eax_5 + 0x15)
        var_50 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_7 = *esi
    esi[7] = &esi[7][1]
    int32_t var_8_1 = 0
    int32_t* edi = *(*eax_7 + 0x1c)
    int32_t* result
    
    if (edi == 0)
        esi[7] -= 1
        result = nullptr
    else if (arg2 s< edi[3])
        int16_t var_28 = 1
        int32_t ecx_5 = *edi
        int32_t var_24_1 = ecx_5
        int16_t edx = edi[1].w
        int16_t var_1a_1 = edx
        int32_t eax_9
        eax_9.w = edi[2].w
        int16_t var_26_1 = eax_9.w
        int32_t eax_12
        int32_t edx_2
        edx_2:eax_12 = sx.q(zx.d(eax_9.w) * zx.d(edx))
        int16_t eax_14 = ((eax_12 + (edx_2 & 7)) s>> 3).w
        int16_t var_1c_1 = eax_14
        int32_t eax_16 = zx.d(eax_14) * ecx_5
        int32_t var_20_1 = eax_16
        int16_t var_18_1 = 0
        void* ebx_1 = edi[3]
        void* esi_1 = eax_16 << 2
        
        if (ebx_1 s> esi_1)
            ebx_1 = esi_1
            *(arg1 + 0x55) = 1
            arg1[5] = esi_1
            arg1[7] = 0
        
        if (ebx_1 - 4 u> 0xffffffb)
            sub_4c5870("bufferSize >= DSBSIZE_MIN && bufferSize <= DSBSIZE_MAX", &data_83f3d3, 
                "Windows\WindowsSound.cpp", 0xcc, "DxSoundCreateBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int16_t* var_3c_1 = &var_28
        int32_t var_34_1 = 0
        int32_t var_30_1 = 0
        int32_t* eax_18 = *(ecx + 4)
        int32_t var_40_1 = 0
        int32_t var_38_1 = 0
        int32_t var_4c = 0x24
        int32_t var_48_1 = 0x180e0
        void* var_44_1 = ebx_1
        int32_t var_2c_1 = 0
        int32_t* result_1
        
        if ((*(*eax_18 + 0xc))(eax_18, &var_4c, &result_1, 0) != 0)
            sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0xd4, 
                "DxSoundCreateBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* eax_23
        int32_t edx_6
        eax_23, edx_6 = sub_558760(result_1)
        char* var_58_1 = eax_23
        
        if (*(arg1 + 0x55) == 0)
            sub_4d6cf0(eax_23, edx_6, arg1, nullptr, eax_23, ebx_1)
        else
            arg1[6] = arg2
            void* edi_2 = edi[3] - arg2
            
            if (edi_2 s< esi_1)
                sub_5588c0(arg1, edi_2, eax_23)
            else
                sub_5588c0(arg1, ebx_1, eax_23)
        
        sub_558800(result_1)
        result = result_1
        var_50[7] -= 1
    else
        sub_4c5680("sound play position is passed end of data")
        esi[7] -= 1
        result = nullptr
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
