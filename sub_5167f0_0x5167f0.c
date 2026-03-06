// 函数名称: sub_5167f0
// 虚拟地址: 0x5167f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5167f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fef8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_c0 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg1
    char** eax_3 = *edi
    void* ebx = nullptr
    char** var_20
    char** esi
    
    if (eax_3 != 0)
        if (eax_3[1] != 2)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_20 = eax_3
        esi = eax_3
    else
        esi = sub_50a390(2)
        var_20 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_5 = *esi
    esi[7] = &esi[7][1]
    int32_t var_8_1 = 0
    void* result = **eax_5
    int32_t ecx = *(result + 8)
    void* result_1 = result
    
    if (edi[5] s<= 0)
        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, "c:\ax2010\engine\xArray.h", 0xb5, 
            "XArray<struct Mat4>::operator []")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = edi[4]
    void* const result_3 = nullptr
    void* result_2 = nullptr
    
    if (ecx s> 0)
        int32_t var_18_1 = 0
        
        while (true)
            if (result_3 s< 0 || result_3 s>= edi[0x20])
                sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, "c:\ax2010\engine\xArray.h", 
                    0xb5, "XArray<struct Mat4>::operator []")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            float var_b0[0x10]
            sub_406020(&var_b0, ebx + edx, *(result + 0xc) + var_18_1 + 0x78)
            var_18_1 += 0xd0
            void var_70
            __builtin_memcpy(&var_70, &var_b0, 0x40)
            void* edi_2 = arg1[0x1f] + ebx
            result = result_2 + 1
            ebx += 0x40
            __builtin_memcpy(edi_2, &var_70, 0x40)
            result_2 = result
            
            if (result s>= ecx)
                esi = var_20
                break
            
            result = result_1
            result_3 = result_2
            edi = arg1
            continue
    
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
