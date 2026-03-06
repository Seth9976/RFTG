// 函数名称: sub_4d9aa0
// 虚拟地址: 0x4d9aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d9aa0(int32_t* arg1, int32_t arg2, float arg3 @ ecx, int32_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t* eax = data_27e7fe0
    int32_t* eax = data_27e7fe0
    void var_18
    
    if (eax[0xe] == 0)
        sub_4d9830(eax, arg5, arg4, arg1, arg3, arg6)
    else
        void var_28
        
        if (sub_4d9650(eax, &eax[0xa], arg1, &var_18, arg3) != 0)
            sub_4d9830(arg6, arg5, arg4, &var_18, &var_28, arg6)
}
