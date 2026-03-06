// 函数名称: sub_47fbe0
// 虚拟地址: 0x47fbe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47fbe0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69082c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_esi
    int32_t var_24 = __security_cookie ^ &__saved_esi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165240 & 1) == 0)
        data_3165240.d |= 1
        int32_t var_c_1 = 0
        data_316523c = sub_4f5220(data_307c630, "btnTrash")
        int32_t var_c_2 = 0xffffffff
    
    int32_t* ecx
    
    if ((data_3165240 & 2) == 0)
        data_3165240.d |= 2
        int32_t var_c_3 = 1
        ecx = data_307c630
        data_3165238 = sub_4f5220(ecx, "ProfileTab")
        int32_t var_c_4 = 0xffffffff
    
    int32_t esi = *(arg1 + 4)
    
    if (arg2 == data_316523c)
        sub_408d20(esi)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg2 == data_3165238)
        void* eax_8 = data_27e7a58
        
        if (esi != *(eax_8 + 4))
            *(eax_8 + 8) = esi
            data_27e7a54 = esi * 0x214 + *eax_8
        else
            sub_407670()
            sub_408da0(ecx)
            sub_4075c0()
        
        sub_408a40()
        data_27e7a54
        sub_403e80()
        sub_409060()
        data_27c060c = sub_408650()
        data_30d6f38 = data_307c620
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
