// 函数名称: sub_518400
// 虚拟地址: 0x518400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_518400(int32_t* arg1)
{
    // 第一条实际指令: if (data_26a44e4 == 0)
    if (data_26a44e4 == 0)
        return 
    
    int32_t* ebx_1 = *arg1
    
    if (ebx_1 == 0)
        return 
    
    int32_t esi_2 = arg1[2] * 0x2c
    arg1[1] = 0
    sub_4f4430(ebx_1, sub_4f4380(esi_2), esi_2)
}
