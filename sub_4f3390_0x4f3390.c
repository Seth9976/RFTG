// 函数名称: sub_4f3390
// 虚拟地址: 0x4f3390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_4f3390(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = arg1
    arg1 = nullptr
    void** ebx = *eax_3
    void* ecx_1 = ebx[0xbf]
    *eax_3 = ecx_1
    
    if (ecx_1 == 0)
        eax_3[1] = 0
    else
        *(ecx_1 + 0x300) = 0
    
    __builtin_memcpy(arg2, ebx, 0x2fc)
    int32_t var_8_1 = 0
    eax_3[2] -= 1
    arg1 = 1
    sub_4eb760(ebx)
    void* edi_1 = data_26a44e4
    
    if (edi_1 == 0)
        sub_4f4250()
        edi_1 = data_26a44e4
    
    int32_t edx = 0
    void** edi_2
    
    while (true)
        if (1 << (edx.b + 4) s>= 0x304)
            edi_2 = edi_1 + edx * 0x14
            break
        
        edx += 1
        
        if (edx s>= 7)
            edi_2 = edi_1 + 0x8c
            break
    
    edi_2[3] -= 1
    
    if (sub_4f4210(edi_2, ebx) != 0)
        *ebx = *edi_2
        *edi_2 = ebx
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
        "XAllocator::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
