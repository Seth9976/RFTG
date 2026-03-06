// 函数名称: __get_sys_err_msg
// 虚拟地址: 0x5a7eb5
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__get_sys_err_msg(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    
    if (esi s< 0 || esi s>= data_8b8ea0)
        esi = data_8b8ea0
    
    return (&data_8b8df0)[esi]
}
