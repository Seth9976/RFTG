// 函数名称: sub_6661e0
// 虚拟地址: 0x6661e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6661e0(char* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    sub_665690(arg1, arg2)
    
    if ((arg3.b & 0x20) != 0)
        sub_66ea90(arg1)
    
    if ((arg3.b & 0x40) != 0 && (arg2[2].b & 2) != 0)
        sub_66e990(arg1, &arg2[0x11])
    
    if ((arg3.b & 4) != 0)
        sub_66e950(arg1)
    
    if ((arg3 & 0x100) != 0)
        sub_66ea50(arg1)
    
    if ((arg3 & 0x1000) != 0)
        sub_66e9f0(arg1, 0, 1)
    else if ((arg3 & 0x800) != 0)
        sub_66e9f0(arg1, 0, 0)
    
    if (arg3.b s< 0)
        sub_66e920(arg1)
    
    if ((arg3 & 0x200) != 0)
        sub_66e930(arg1)
    
    if ((arg3.b & 8) != 0)
        sub_66e970(arg1)
    
    if ((arg3 & 0x400) != 0)
        sub_66ea70(arg1)
    
    if ((arg2[2] & 0x8000) != 0)
        sub_665db0(arg1, arg2[0x3a])
    
    sub_6659a0(arg1, arg2)
}
