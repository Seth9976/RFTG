// 函数名称: sub_518040
// 虚拟地址: 0x518040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_518040(int32_t* arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690068
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** ebx = *arg1
    
    if (ebx == 0)
        ebx = sub_50a390(2)
    else if (ebx[1] != 2)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_1c = ebx
    
    if (*ebx == 0)
        sub_5094d0(ebx, 0, 1)
    
    char* eax_4 = *ebx
    ebx[7] = &ebx[7][1]
    int32_t var_8_1 = 0
    void* var_20 = **eax_4
    char var_11 = 0
    void* i_1 = nullptr
    void* i
    
    if (arg1[0xc4] s> 0)
        void* esi_1 = &arg1[0x2d]
        
        do
            if (*(esi_1 - 4) != 0)
                var_11 = 1
                
                if (arg1[5] s<= 0)
                    sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                        "c:\ax2010\engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_5173a0(var_20, *(esi_1 + 0x100), esi_1 + 0x120, esi_1 + 0x104, esi_1, 
                    *(var_20 + 0xc), arg2, arg1[4])
            
            i = i_1 + 1
            esi_1 += 0x130
            i_1 = i
        while (i s< arg1[0xc4])
    
    ebx[7] -= 1
    i.b = var_11
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}
