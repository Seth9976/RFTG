// 函数名称: sub_47cb70
// 虚拟地址: 0x47cb70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47cb70(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690964
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307c588
    
    if ((data_3165280 & 1) == 0)
        data_3165280.d |= 1
        int32_t var_8_1 = 0
        data_316527c = sub_4f5220(esi, "btnTranslations")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165280 & 2) == 0)
        data_3165280.d |= 2
        int32_t var_8_3 = 1
        data_3165278 = sub_4f5220(esi, "btnGoogle")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165280 & 4) == 0)
        data_3165280.d |= 4
        int32_t var_8_5 = 2
        data_3165274 = sub_4f5220(esi, "btnGraphics")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3165280 & 8) == 0)
        data_3165280.d |= 8
        int32_t var_8_7 = 3
        data_3165270 = sub_4f5220(esi, "btnGameSpeed")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3165280 & 0x10) == 0)
        data_3165280.d |= 0x10
        int32_t var_8_9 = 4
        data_316526c = sub_4f5220(esi, "btnLanguage")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3165280 & 0x20) == 0)
        data_3165280.d |= 0x20
        int32_t var_8_11 = 5
        data_3165268 = sub_4f5220(esi, "btnBack")
        int32_t var_8_12 = 0xffffffff
    
    if (arg1 == data_3165268)
        int32_t ecx_1 = *(data_27e7a40 + 0x2c4960)
        int32_t ecx_2 = neg.d(ecx_1)
        data_30d6f38 = not.d(sbb.d(ecx_2, ecx_2, ecx_1 != 0)) & data_307c76c
    else if (arg1 == data_3165270)
        void* ecx_6 = data_27e7a50
        *(ecx_6 + 0xc) = mods.dp.d(sx.q(*(ecx_6 + 0xc) + 1), 3)
    else if (arg1 == data_316526c)
        data_30d6f38 = data_307c4d8
    else if (arg1 == data_3165278)
        void* ecx_7 = data_27e7a50
        int32_t eax_14
        eax_14.b = *(ecx_7 + 0x1c) == 0
        *(ecx_7 + 0x1c) = eax_14.b
        sub_4fd680(eax_14.b)
    else if (arg1 == data_3165274)
        void* eax_15 = data_27e7a50
        int32_t ecx_10 = (*(eax_15 + 0x10) + 1) & 0x80000001
        
        if (ecx_10 s< 0)
            ecx_10 = ((ecx_10 - 1) | 0xfffffffe) + 1
        
        *(eax_15 + 0x10) = ecx_10
    else if (arg1 == data_316527c)
        sub_4c5c60("https://goo.gl/forms/N0z6VGbK3kkuXywx2")
    
    sub_408ca0()
    sub_408a40()
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
