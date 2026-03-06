// 函数名称: sub_600f60
// 虚拟地址: 0x600f60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_600f60()
{
    // 第一条实际指令: if (data_8bad78 != 0xffffffff)
    if (data_8bad78 != 0xffffffff)
    label_600fba:
        
        if (data_bf7ff0 == 0)
            return TlsGetValue(data_8bad78)
    else if (data_bf7ff0 == 0)
        sub_5dadf0(0xbf7fec)
        
        if (data_8bad78 == 0xffffffff && data_bf7ff0 == 0)
            uint32_t eax_1 = TlsAlloc()
            
            if (eax_1 == 0xffffffff)
                data_bf7ff0 = 1
            else
                data_8bad78 = eax_1
        
        sub_5dae20(0xbf7fec)
        goto label_600fba
    
    return sub_5d43b0() __tailcall
}
