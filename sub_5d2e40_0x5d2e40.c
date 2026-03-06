// 函数名称: sub_5d2e40
// 虚拟地址: 0x5d2e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5d2e40()
{
    // 第一条实际指令: BOOL result = data_bf7c1c
    BOOL result = data_bf7c1c
    data_bf7c20 = 0
    data_bf7c24 = 0
    data_bf7c28 = 0
    
    if (result != 0)
        result = sub_5df000(result)
        data_bf7c1c = 0
    
    return result
}
