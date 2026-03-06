// 函数名称: sub_41e6a0
// 虚拟地址: 0x41e6a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41e6a0()
{
    // 第一条实际指令: int32_t* esi = data_307c530
    int32_t* esi = data_307c530
    data_c0213c = sub_4f5220(esi, "txt_playerVPTotal")
    data_c02130 = sub_4f5220(esi, "txt_deckCount")
    data_c02134 = sub_4f5220(esi, "txt_discardCount")
    data_c0212c = sub_4f5220(esi, "txt_vpPool")
    data_c02138 = sub_4f5220(esi, "txt_prompt")
    data_c02140 = sub_4f5220(esi, "img_deck")
    data_c02148 = sub_4f5220(esi, "img_discard")
    data_c02128 = sub_4f5220(esi, "img_vpPool")
    data_c02150 = sub_4f5220(esi, "rgn_playerCards")
    data_c02154 = sub_4f5220(esi, "rgn_playerTableau")
    data_c02158 = sub_4f5220(esi, "rgn_opponents")
    int32_t eax_11 = sub_4f5220(esi, "rgn_opponentZoom")
    int32_t* esi_1 = data_307c584
    data_c0215c = eax_11
    data_c02164 = sub_4f5220(esi_1, "AvatarImage")
    data_c02160 = sub_4f5220(esi_1, "txt_opponentVPTotal")
    data_c02168 = sub_4f5220(esi_1, "txt_oppopentName")
    data_c0216c = sub_4f5220(esi_1, "rgn_opponentAction0")
    data_c02170 = sub_4f5220(esi_1, "rgn_opponentAction1")
    data_c02174 = sub_4f5220(esi_1, "rgn_opponentActionOnlyOne")
    data_c02178 = sub_4f5220(esi_1, "rgn_opponentTableau")
    data_c0217c = sub_4f5220(esi_1, "rgn_opponentDisplayUse")
    int32_t result = sub_4f5220(esi_1, "rgn_opponentDisplayPay")
    data_c02180 = result
    return result
}
