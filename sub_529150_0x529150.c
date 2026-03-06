// 函数名称: sub_529150
// 虚拟地址: 0x529150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_529150()
{
    // 第一条实际指令: __chkstk(0x1010)
    __chkstk(0x1010)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t edx = data_30d74ec
    int32_t var_1010
    int32_t* var_10 = &var_1010
    int32_t eax_2 = data_30da51c
    int32_t var_100c[0x3fd]
    int32_t* var_14 = &var_100c
    var_1010 = 0
    int32_t ecx = sub_529040(eax_2, edx, &data_30d951c, edx, var_14, var_10)
    int32_t esi = 0
    
    if (var_1010 s> 0)
        do
            sub_530500(ecx, var_100c[esi])
            ecx = sub_528d70()
            esi += 1
        while (esi s< var_1010)
    
    char var_10_1 = 1
    data_30da51c = 0
    int32_t result = sub_528280(var_10_1)
    int32_t entry_ebx
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return result
}
