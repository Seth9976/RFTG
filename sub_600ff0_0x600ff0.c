// 函数名称: sub_600ff0
// 虚拟地址: 0x600ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_600ff0(int32_t arg1)
{
    // 第一条实际指令: if (data_bf7ff0 != 0)
    if (data_bf7ff0 != 0)
        return sub_5d4460(arg1) __tailcall
    
    if (TlsSetValue(data_8bad78, arg1) != 0)
        return 0
    
    sub_5cce60("TlsSetValue() failed")
    return 0xffffffff
}
