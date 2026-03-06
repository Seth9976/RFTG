// 函数名称: sub_4d2920
// 虚拟地址: 0x4d2920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4d2920(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c7d9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = arg1
    arg1 = nullptr
    int32_t* esi = *eax_3
    void* ecx_1 = esi[4]
    *eax_3 = ecx_1
    
    if (ecx_1 == 0)
        eax_3[1] = 0
    else
        *(ecx_1 + 0x14) = 0
    
    *arg2 = *esi
    arg2[1] = esi[1]
    arg2[2] = esi[2]
    arg2[3] = esi[3]
    int32_t var_8_1 = 0
    eax_3[2] -= 1
    arg1 = 1
    sub_5041e0(&esi[1])
    
    if (data_26a44e4 == 0)
        sub_4f4250()
    
    int32_t edx_2 = 0
    void** edi_1
    
    while (true)
        if (1 << (edx_2.b + 4) s>= 0x18)
            edi_1 = data_26a44e4 + edx_2 * 0x14
            break
        
        edx_2 += 1
        
        if (edx_2 s>= 7)
            edi_1 = data_26a44e4 + 0x8c
            break
    
    edi_1[3] -= 1
    
    if (sub_4f4210(edi_1, esi) != 0)
        *esi = *edi_1
        *edi_1 = esi
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
        "XAllocator::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
