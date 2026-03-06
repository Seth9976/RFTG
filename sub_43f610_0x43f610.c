// 函数名称: sub_43f610
// 虚拟地址: 0x43f610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_43f610()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696db2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edx
    
    if ((data_3166338 & 1) == 0)
        data_3166338.d |= 1
        int32_t var_8_1 = 0
        char const* const var_30_1 = "ui_undo"
        int32_t eax_4
        eax_4, edx = sub_510710(data_307ca78, edx)
        data_3166334 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166338 & 2) == 0)
        data_3166338.d |= 2
        int32_t var_8_3 = 1
        char const* const var_30_2 = "ui_ok"
        int32_t eax_6
        eax_6, edx = sub_510710(data_307ca78, edx)
        data_3166330 = eax_6
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166338 & 4) == 0)
        data_3166338.d |= 4
        int32_t var_8_5 = 2
        char const* const var_30_3 = "ui_console"
        data_316632c = sub_510710(data_307ca78, edx)
        int32_t var_8_6 = 0xffffffff
    
    int32_t eax_10 = sub_510860(data_3166334)
    int32_t eax_12 = sub_510860(data_3166330)
    int32_t eax_14 = sub_510860(data_316632c)
    
    if (*(data_27e7a40 + 0x2c4960) == 0)
        *(sub_4fc3d0(&data_be1cb8, eax_10) + 8) = 1
        void* eax_17 = sub_4fc3d0(&data_be1cb8, eax_12)
        *(eax_17 + 8) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_17
    
    *(sub_4fc3d0(&data_be1cb8, eax_10) + 8) = 0
    void* eax_19 = sub_4fc3d0(&data_be1cb8, eax_12)
    void* ecx_3 = data_27e7a40
    *(eax_19 + 8) = 0
    char* edx_4 = *(ecx_3 + 0x548)
    
    if ((data_3166338 & 8) == 0)
        data_3166338.d |= 8
        int32_t var_8_7 = 3
        data_3166328 = sub_4f5220(data_307ca50, "btn_ok")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3166338 & 0x10) == 0)
        data_3166338.d |= 0x10
        int32_t var_8_9 = 4
        data_3166324 = sub_4f5220(data_307ca50, "animOk")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3166338 & 0x20) == 0)
        data_3166338.d |= 0x20
        int32_t var_8_11 = 5
        data_3166320 = sub_4f5220(data_307ca54, "btn_undo")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_3166338 & 0x40) == 0)
        data_3166338.d |= 0x40
        int32_t var_8_13 = 6
        data_316631c = sub_4f5220(data_307ca54, "animUndo")
        int32_t var_8_14 = 0xffffffff
    
    *(sub_4fc3d0(&data_be1cb8, eax_12) + 0x2c) = sub_43b510
    *(sub_4fc3d0(&data_be1cb8, eax_10) + 0x2c) = sub_43b490
    void* eax_28
    char edx_6
    eax_28, edx_6 = sub_4fc3d0(&data_be1cb8, eax_14)
    int32_t ecx_5 = data_3166328
    *(eax_28 + 0x2c) = sub_43b0e0
    sub_43ae20(data_3166324, edx_6, eax_12, edx_4, ecx_5)
    float edx_7 = data_316631c
    void* eax_31 = sub_43acf0(data_3166320, edx_7, edx_4, eax_10, edx_7)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_31
}
