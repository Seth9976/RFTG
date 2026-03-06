// 函数名称: sub_5182d0
// 虚拟地址: 0x5182d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_5182d0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c6fc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 2
    
    if (data_26a44e4 != 0)
        int32_t* edi_1 = *(arg1 + 0x7c)
        
        if (edi_1 != 0)
            int32_t esi_2 = *(arg1 + 0x84) << 6
            *(arg1 + 0x80) = 0
            sub_4f4430(edi_1, sub_4f4380(esi_2), esi_2)
    
    var_8_1.b = 1
    sub_5a71d9(arg1 + 0x1c, 0xc, 8, sub_518400)
    var_8_1.b = 0
    
    if (data_26a44e4 != 0)
        int32_t* edi_3 = *(arg1 + 0x10)
        
        if (edi_3 != 0)
            int32_t esi_4 = *(arg1 + 0x18) << 6
            *(arg1 + 0x14) = 0
            sub_4f4430(edi_3, sub_4f4380(esi_4), esi_4)
    
    int32_t var_8_2 = 0xffffffff
    int32_t* result = sub_5041e0(arg1 + 4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
